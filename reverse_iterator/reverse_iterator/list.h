#pragma once
#include<assert.h>
#include"ReverseIterator.h"

namespace yf
{
    template<class T>
    struct ListNode
    {
        ListNode<T>* _next;
        ListNode<T>* _prev;
        T _data;

        ListNode(const T& x = T())
            :_next(nullptr)
            , _prev(nullptr)
            , _data(x)
        {}
    };

    template<class T, class Ref, class Ptr>
    struct __list_iterator
    {
        typedef ListNode<T> Node;
        typedef __list_iterator<T, Ref, Ptr> self;
        Node* _node;

        __list_iterator(Node* x)
            :_node(x)
        {}

        self& operator++()
        {
            _node = _node->_next;
            return *this;
        }

        self operator++(int)
        {
            self tmp(*this);
            _node = _node->_next;
            return tmp;
        }

        self& operator--()
        {
            _node = _node->_prev;
            return *this;
        }

        self operator--(int)
        {
            self tmp(*this);

            _node = _node->_prev;

            return tmp;
        }

        Ref operator*()
        {
            return _node->_data;
        }

        Ptr operator->()
        {
            return &_node->_data;
        }

        bool operator!=(const self& s)
        {
            return _node != s._node;
        }

        bool operator==(const self& s)
        {
            return _node == s._node;
        }
    };

    template<class T>
    class list
    {
        typedef ListNode<T> Node;
    public:
        typedef __list_iterator<T, T&, T*> iterator;
        typedef __list_iterator<T, const T&, const T*> const_iterator;

        typedef ReverseIterator<iterator, T&, T*> reverse_iterator;
        typedef ReverseIterator<const_iterator, const T&, const T*>
            const_reverse_iterator;

        //typedef __list_const_iterator<T> const_iterator;

        reverse_iterator rbegin()
        {
            return reverse_iterator(end());
        }

        reverse_iterator rend()
        {
            return reverse_iterator(begin());
        }

        iterator begin()
        {
            return _head->_next;
        }

        iterator end()
        {
            return _head;
        }

        const_iterator begin() const
        {
            return _head->_next;
        }

        const_iterator end() const
        {
            return _head;
        }
    };
}