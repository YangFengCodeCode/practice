#pragma once
namespace open_address
{
	//ö��
	enum State
	{
		EMPTY,
		EXIST,
		DELETE
	};

	template<class K, class V>
	struct HashData
	{
		pair<K, V> _kv;
		State _state = EMPTY; // ���
	};

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
	struct HashFunc<string>//ȫ�ػ�
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


	template<class K, class V, class Hash = HashFunc<K>>
	class HashTable
	{
	public:

		//Ϊvector���ռ�
		HashTable(size_t size = 10)
		{
			_tables.resize(size);
		}

		HashData<K, V>* Find(const K& key)
		{
			Hash hs;
			// ����̽��
			size_t hashi = hs(key) % _tables.size();
			while (_tables[hashi]._state != EMPTY)
			{
				if (key == _tables[hashi]._kv.first
					&& _tables[hashi]._state == EXIST)
				{
					return &_tables[hashi];
				}

				++hashi;
				hashi %= _tables.size();// ���hashi == size ��������
			}

			return nullptr;
		}

		bool Insert(const pair<K, V>& kv)
		{
			if (Find(kv.first))
				return false;

			// ���ݵ�����
			//if ((double)_n / (double)_tables.size() >= 0.7)
			if (_n * 10 / _tables.size() >= 7)
			{
				//size_t newSize = _tables.size() * 2;
				//vector<HashData> newTables(newSize);
				//// �����ɱ�ӳ�䵽�±�
				////....
				//_tables.swap(newTables);

				HashTable<K, V, Hash> newHT(_tables.size() * 2);
				// �����ɱ����뵽�±�
				for (auto& e : _tables)
				{
					if (e._state == EXIST)
					{
						newHT.Insert(e._kv);
					}
				}
				_tables.swap(newHT._tables);
			}

			Hash hs;
			// ����̽��
			size_t hashi = hs(kv.first) % _tables.size();
			while (_tables[hashi]._state == EXIST)
			{
				++hashi;
				hashi %= _tables.size();// �ӵ�β���� �ͻص�ͷ��λ��
			}

			_tables[hashi]._kv = kv;
			_tables[hashi]._state = EXIST;
			++_n;

			return true;
		}

		bool Erase(const K& key)
		{
			HashData<K, V>* ret = Find(key);
			if (ret)
			{
				_n--;
				ret->_state = DELETE;
				return true;
			}
			else
			{
				return false;
			}
		}

	private:
		vector<HashData<K, V>> _tables;
		size_t _n = 0;
	};





	void TestHT1()
	{
		cout << "Test1: " << endl;
		int a[] = { 1,4,24,34,7,44,17,37 };
		HashTable<int, int> ht;
		for (auto e : a)
		{
			ht.Insert(make_pair(e, e));
		}

		for (auto e : a)
		{
			auto ret = ht.Find(e);
			if (ret)
			{
				cout << ret->_kv.first << ":E" << endl;
			}
			else
			{
				cout << ret->_kv.first << ":D" << endl;
			}
		}
		cout << endl;

		ht.Erase(34);
		ht.Erase(4);

		for (auto e : a)
		{
			auto ret = ht.Find(e);
			if (ret)
			{
				cout << ret->_kv.first << ":E" << endl;
			}
			else
			{
				cout << e << ":D" << endl;
			}
		}
		cout << endl;
	}


	void TestHT2()
	{
		HashTable<string, string> dict;
		dict.Insert(make_pair("sort", "����"));
		dict.Insert(make_pair("string", "�ַ���"));
		auto kv = dict.Find("sort");

		cout << "Test2: " << endl;
		cout << kv->_kv.first << " " << kv->_kv.second << endl;
		
	}
}

