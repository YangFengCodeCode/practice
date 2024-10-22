#pragma once
#pragma once
#include"HashTable.h"

namespace yf
{
	template<class K, class V, class Hash = HashFunc<K>>
	class unordered_map
	{
		struct MapKeyOfT
		{
			const K& operator()(const pair<K, V>& kv)
			{
				return kv.first;
			}
		};

	public:
		typedef typename hash_bucket::HashTable<K, pair<const K, V>, MapKeyOfT,Hash>::iterator iterator;

		iterator begin()
		{
			return _ht.begin();
		}

		iterator end()
		{
			return _ht.end();
		}

		pair<iterator, bool> insert(const pair<K, V>& kv)
		{
			return _ht.Insert(kv);
		}

		bool erase(const K& key)
		{
			return _ht.Erase(key);
		}

		V& operator[](const K& key)
		{
			pair<iterator, bool> ret = insert(make_pair(key, V()));
			return ret.first->second;

		}

		iterator find(const K& key)
		{
			return _ht.Find(key);
		}

	private:
		hash_bucket::HashTable<K, pair<const K, V>, MapKeyOfT, Hash> _ht;
	};

	void test_map1()
	{
		unordered_map<string, string> dict;
		dict.insert(make_pair("sort", "grve"));
		dict.insert(make_pair("left", "egar"));
		dict.insert(make_pair("right", "jmh"));

		for (auto& kv : dict)
		{
			cout << kv.first << ":" << kv.second << endl;
		}

		cout << "Test erase" << endl;
		dict.erase("sort");
		for (auto& kv : dict)
		{
			cout << kv.first << ":" << kv.second << endl;
		}

	}
}
