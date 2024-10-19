#pragma once
template<class K, class V>
struct AVLTreeNode
{
    AVLTreeNode<K, V>* _left;
    AVLTreeNode<K, V>* _right;
    AVLTreeNode<K, V>* _parent;
    int _bf; // balance factor
    pair<K, V> _kv;

    AVLTreeNode(const pair<K, V>& kv)
        :_left(nullptr)
        , _right(nullptr)
        , _parent(nullptr)
        , _bf(0)
        , _kv(kv)
    {}
};

template<class K, class V>
class AVLTree
{
    typedef AVLTreeNode<K, V> Node;
public:
    bool Insert(const pair<K, V>& kv)
    {
        if (_root == nullptr)
        {
            _root = new Node(kv);
            return true;
        }

        Node* parent = nullptr;
        Node* cur = _root;
        while (cur)
        {
            if (cur->_kv.first < kv.first)
            {
                parent = cur;
                cur = cur->_right;
            }
            else if (cur->_kv.first > kv.first)
            {
                parent = cur;
                cur = cur->_left;
            }
            else
            {
                return false;
            }
        }

        cur = new Node(kv);
        if (parent->_kv.first < kv.first)
        {
            parent->_right = cur;
        }
        else
        {
            parent->_left = cur;
        }
        cur->_parent = parent;

        while (parent)
        {
            if (cur == parent->_left)
            {
                parent->_bf--;
            }
            else
            {
                parent->_bf++;
            }

            if (parent->_bf == 0)
            {
                break;
            }
            else if (parent->_bf == 1 || parent->_bf == -1)
            {
                cur = cur->_parent;
                parent = parent->_parent;
            }
            else if (parent->_bf == 2 || parent->_bf == -2)
            {
                // ��ת����
                if (parent->_bf == 2 && cur->_bf == 1)
                {
                    RotateL(parent);
                }
                else if (parent->_bf == -2 && cur->_bf == -1)
                {
                    RotateR(parent);
                }
                else if (parent->_bf == -2 && cur->_bf == 1)
                {
                    RotateLR(parent);
                }
                else
                {
                    RotateRL(parent);
                }

                break;

            }
            else
            {
                // ����֮ǰAVL����������
                assert(false);
            }
        }

        return true;
    }


    void _InOrder(Node* root)
    {
        if (root == nullptr)
            return;

        _InOrder(root->_left);
        cout << root->_kv.first << "[" << root->_bf << "]" << endl;
        _InOrder(root->_right);
    }

    void InOrder()
    {
        _InOrder(_root);
    }

    int _Height(Node* root)
    {
        if (root == nullptr)
            return 0;

        int leftHeight = _Height(root->_left);
        int rightHeight = _Height(root->_right);

        return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
    }

    int Height()
    {
        return _Height(_root);
    }

    bool _IsBalance(Node* root)
    {
        if (root == nullptr)
        {
            return true;
        }
        // ����pRoot�ڵ��ƽ�����ӣ���pRoot���������ĸ߶Ȳ�
        int leftHeight = _Height(root->_left);
        int rightHeight = _Height(root->_right);
        int diff = rightHeight - leftHeight;
        // ����������ƽ��������pRoot��ƽ�����Ӳ���ȣ�����
        // pRootƽ�����ӵľ���ֵ����1����һ������AVL��
        if (abs(rightHeight - leftHeight) >= 2)
        {
            cout << root->_kv.first << "��ƽ��" << endl;
            return false;
        }

        if (rightHeight - leftHeight != root->_bf)
        {
            cout << root->_kv.first << "ƽ�������쳣" << endl;
            return false;
        }

        // pRoot��������������AVL���������һ����AVL��
        return _IsBalance(root->_left) && _IsBalance(root->_right);
    }

    bool IsBalance()
    {
        return _IsBalance(_root);
    }


    size_t Size()
    {
        return _Size(_root);
    }

    size_t _Size(Node* root)
    {
        if (root == NULL)
            return 0;

        return _Size(root->_left)
            + _Size(root->_right) + 1;
    }

    Node* Find(const K& key)
    {
        Node* cur = _root;
        while (cur)
        {
            if (cur->_kv.first < key)
            {
                cur = cur->_right;
            }
            else if (cur->_kv.first > key)
            {
                cur = cur->_left;
            }
            else
            {
                return cur;
            }
        }

        return NULL;
    }



    void RotateL(Node* parent)
    {
        Node* subR = parent->_right;
        Node* subRL = subR->_left;

        parent->_right = subRL;
        if (subRL)
            subRL->_parent = parent;

        subR->_left = parent;
        Node* ppnode = parent->_parent;
        parent->_parent = subR;

        if (parent == _root)
        {
            _root = subR;
            subR->_parent = nullptr;
        }

        else
        {
            if (ppnode->_left == parent)
            {
                ppnode->_left = subR;
            }
            else
            {
                ppnode->_right = subR;
            }
            subR->_parent = ppnode;
        }

        parent->_bf = 0;
        subR->_bf = 0;

        
    }


    void RotateR(Node* parent)
    {
        Node* subL = parent->_left;
        Node* subLR = subL->_right;

        parent->_left = subLR;
        if (subLR)
            subLR->_parent = parent

        subL->_right = parent;

        Node* ppnode = parent->_parent;
        parent->_parent = subL;

        if (parent == _root)
        {
            _root = subL;
            subL->_parent = nullptr;
        }
        else
        {
            if (ppnode->_left == parent)
            {
                ppnode->_left = subL;
            }
            else
            {
                ppnode->_right = subL;
            }
            subL->_parent = ppnode;
        }

        subL->_bf = 0;
        parent->_bf = 0;
    }


    //������
    void RotateLR(Node* parent)
    {
        Node* subL = parent->_left;
        Node* subLR = subL->_right;

        int bf = subLR->_bf;
        RotateL(parent->_left);
        RotateR(parent)

            if (bf == -1)
            {
                subLR->_bf = 0;
                subL->_bf = 0;
                parent->_bf = 1;
            }
            else if (bf == 1)
            {
                subLR->_bf = 0;
                subL->_bf = -1;
                parent->_bf = 0;
            }
            else if (bf == 0)
            {
                subLR->_bf = 0;
                subL->_bf = 0;
                parent->_bf = 0;
            }
            else
            {
                assert(false);
            }
    }

    void RotateRL(Node* parent)
    {
        Node* subR = parent->_right;
        Node* subRL = subR->_left;
        int bf = subRL->_bf;

        RotateR(subR);
        RotateL(parent)

        subRL->_bf = 0;
        if (bf == 1)
        {
            subR->_bf = 0;
            parent->_bf = -1;
        }
        else if (bf == -1)
        {
            parent->_bf = 0;
            subR->_bf = 1;
        }
        else
        {
            parent->_bf = 0;
            subR->_bf = 0;
        }
    }


private:
    Node* _root = nullptr;
};