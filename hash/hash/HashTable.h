#pragma once
template<class K>
struct HashFunc
{
	size_t operator()(const K& key)
	{
		return (size_t)key;
	}
};

// �ػ�
template<>
struct HashFunc<string>
{
	size_t operator()(const string& s)
	{
		size_t hash = 0;
		for (auto e : s)
		{
			hash += e;
			hash *= 131;
		}

		return hash;
	}
};

namespace hash_bucket
{
	// T -> K
	// T -> pair<K, V>
	template<class T>
	struct HashNode
	{
		HashNode<T>* _next;
		T _data;

		HashNode(const T& data)
			:_next(nullptr)
			, _data(data)
		{}
	};

	// ǰ������
	template<class K, class T, class KeyOfT, class Hash>
	class HashTable;

	template<class K, class T, class KeyOfT, class Hash>
	struct __HTIterator
	{
		typedef HashNode<T> Node;
		typedef HashTable<K, T, KeyOfT, Hash> HT;
		typedef __HTIterator<K, T, KeyOfT, Hash> Self;

		Node* _node;
		HT* _ht;

		__HTIterator(Node* node, HT* ht)
			:_node(node)
			, _ht(ht)
		{}

		T& operator*()
		{
			return _node->_data;
		}
		T* operator->()
		{
			return &_node->_data;
		}


		Self& operator++()
		{
			if (_node->_next)
			{
				// ��ǰͰ���ǽڵ�
				_node = _node->_next;
			}
			else
			{
				// ��ǰͰ�����ˣ�����һ��Ͱ
				KeyOfT kot;
				Hash hs;
				size_t hashi = hs(kot(_node->_data)) %
					_ht->_tables.size();
				// ����һ��Ͱ
				hashi++;
				while (hashi < _ht->_tables.size())
				{
					if (_ht->_tables[hashi])
					{
						_node = _ht->_tables[hashi];
						break;
					}

					hashi++;
				}

				// ����û��Ͱ��
				if (hashi == _ht->_tables.size())
				{
					_node = nullptr;
				}
			}

			return *this;
		}

		bool operator!=(const Self& s)
		{
			return _node != s._node;
		}
	};

	template<class K, class T, class KeyOfT, class Hash>
	class HashTable
	{
		template<class K, class T, class KeyOfT, class Hash>
		friend struct __HTIterator;

		typedef HashNode<T> Node;
	public:
		typedef __HTIterator<K, T, KeyOfT, Hash> iterator;

		iterator begin()
		{
			for (size_t i = 0; i < _tables.size(); i++)
			{
				// �ҵ���һ��Ͱ�ĵ�һ���ڵ�
				if (_tables[i])
				{
					return iterator(_tables[i], this);
				}
			}

			return end();
		}

		iterator end()
		{
			return iterator(nullptr, this);
		}

		HashTable()
		{
			_tables.resize(10, nullptr);
			_n = 0;
		}

		~HashTable()
		{
			for (size_t i = 0; i < _tables.size(); i++)
			{
				Node* cur = _tables[i];
				while (cur)
				{
					Node* next = cur->_next;
					delete cur;

					cur = next;
				}
				_tables[i] = nullptr;
			}
		}

		pair<iterator, bool> Insert(const T& data)
		{
			KeyOfT kot;
			iterator it = Find(kot(data));
			if (it != end())
				return make_pair(it, false);

			Hash hs;

			// �������ӵ�1������
			if (_n == _tables.size())
			{
				vector<Node*> newTables(_tables.size() * 2, nullptr);
				for (size_t i = 0; i < _tables.size(); i++)
				{
					// ȡ���ɱ��нڵ㣬���¼���ҵ��±�Ͱ��
					Node* cur = _tables[i];
					while (cur)
					{
						Node* next = cur->_next;

						// ͷ�嵽�±�
						size_t hashi = hs(kot(cur->_data)) %
							newTables.size();
						cur->_next = newTables[hashi];
						newTables[hashi] = cur;

						cur = next;
					}

					_tables[i] = nullptr;
				}

				_tables.swap(newTables);
			}

			size_t hashi = hs(kot(data)) % _tables.size();
			Node* newnode = new Node(data);

			// ͷ��
			newnode->_next = _tables[hashi];
			_tables[hashi] = newnode;

			++_n;
			return make_pair(iterator(newnode, this), true);
		}

		iterator Find(const K& key)
		{
			KeyOfT kot;
			Hash hs;
			size_t hashi = hs(key) % _tables.size();
			Node* cur = _tables[hashi];
			while (cur)
			{
				if (kot(cur->_data) == key)
				{
					return iterator(cur, this);
				}

				cur = cur->_next;
			}

			return iterator(nullptr, this);
		}


		bool Erase(const K& key)
		{
			KeyOfT kot;
			Hash hs;
			size_t hashi = hs(key) % _tables.size();
			Node* prev = nullptr;
			Node* cur = _tables[hashi];
			while (cur)
			{
				if (kot(cur->_data) == key)
				{
					// ɾ��
					if (prev)
					{
						prev->_next = cur->_next;
					}
					else
					{
						_tables[hashi] = cur->_next;
					}

					delete cur;
					--_n;
					return true;
				}

				prev = cur;
				cur = cur->_next;
			}

			return false;
		}
	private:
		vector<Node*> _tables; // ָ������
		size_t _n;
	};
}
