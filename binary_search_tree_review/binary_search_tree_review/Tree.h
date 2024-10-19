#pragma once

template<class K>
struct BSTreeNode
{
	typedef BSTreeNode<K> Node;
	K _key;
	Node* _left;
	Node* _right;

	BSTreeNode(const K& key)
	{
		_key = key;
		_left = nullptr;
		_right = nullptr;
	}

};

template<class K>
class BSTree
{
	typedef BSTreeNode<K> Node;
public:
	BSTree() = default;

	BSTree(const BSTree<K>& t)
	{
		_root = Copy(t._root);
	}

	BSTree<K>& operator=(BSTree<K> t)
	{
		swap(_root, t._root);
		return *this;
	}

	void Inorder()
	{
		_Inorder(_root);
		cout << endl;
	}

	void _Inorder(Node* root)
	{
		if (root == nullptr)
			return;
		_Inorder(root->_left);
		cout << root->_key << " ";
		_Inorder(root->_right);
	}

	~BSTree()
	{
		Destroy(_root);
	}

	
	bool Find(const K& key)
	{
		Node* cur = _root;
		while (cur)
		{
			if (cur->_key > key)
			{
				cur = cur->_left;
			}

			else if (cur->_key < key)
			{
				cur = cur->_right;
			}

			else
			{
				return true;
			}
		}

		return false;
	}


	bool Insert(const K& key)
	{
		if (_root == nullptr)
		{
			_root = new Node(key);
			return true;
		}

		Node* cur = _root;
		Node* parent = nullptr;
		while (cur)
		{
			if (key > cur->_key)
			{
				parent = cur;
				cur = cur->_right;
			}

			else if (key < cur->_key)
			{
				parent = cur;
				cur = cur->_left;
			}

			else
				return false;
		}

		cur = new Node(key);
		if (parent->_key > key)
		{
			parent->_left = cur;
		}

		else
		{
			parent->_right = cur;
		}

		return true;
	}


	bool Erase(const K& key)
	{
		Node* cur = _root;
		Node* parent = cur;
		
		while (cur)
		{
			if (cur->_key > key)
			{
				parent = cur;
				cur = cur->_left;
			}

			else if (cur->_key < key)
			{
				parent = cur;
				cur = cur->_right;
			}

			//�ҵ���
			else
			{
				//ֻ���ҽڵ�
				if (cur->_left == nullptr)
				{
					if (cur == _root)
					{
						_root = cur->_right;
					}

					else
					{
						if (parent->_left == cur)
						{
							parent->_left = cur->_right;
						}

						else
						{
							parent->_right = cur->_right;
						}
					}

					delete cur;
					return true;
				}

				//ֻ����ڵ�
				else if (cur->_right == nullptr)
				{
					if (cur == _root)
					{
						_root = cur->_left;
					}

					else
					{
						if (parent->_left == cur)
						{
							parent->_left = cur->_left;
						}

						else
						{
							parent->_right = cur->_left;
						}
					}

					delete cur;
					return true;

				}


				//���ҽڵ㶼��
				else
				{
					Node* parentMin = cur;
					Node* rightMinNode = cur->_right;

					while (rightMinNode->_left)
					{
						parentMin = rightMinNode;
						rightMinNode = rightMinNode->_left;
					}

					//��ֵ
					cur->_key = rightMinNode->_key;

					if (parentMin->_left = rightMinNode)
					{
						parentMin->_left = rightMinNode->_right;
					}

					else
					{
						parentMin->_right = rightMinNode->_right;
					}

					delete rightMinNode;
					return true;

				}

			}
	
		}
		return false;
	}


	

private:
	void Destroy(Node* root)
	{
		if (root == nullptr)
			return;
		Destroy(root->_left);
		Destroy(root->_right);
		delete root;
	}

	Node* Copy(Node* root)
	{
		if (root == nullptr)
			return nullptr;
		Node* newRoot = new Node(root->_key);
		newRoot->_left = Copy(root->_left);
		newRoot->_right = Copy(root->_right);

		return newRoot;
	}

	Node* _root = nullptr;

};
