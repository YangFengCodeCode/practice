#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<vector>
#include<stack>

using namespace std;

//int main() {
//    int f, f1 = 0, f2 = 1;
//    int N, left, right;
//    cin >> N;
//    while (1)
//    {
//        f = f1 + f2;
//        f1 = f2;
//        f2 = f;
//        if (f < N)
//        {
//            left = f;
//        }
//        else
//        {
//            right = f;
//            break;
//        }
//    }
//    cout << min(N - left, right - N) << endl;
//    return 0;
//}



struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> v;
        TreeNode* cur = root;
        while (cur || !s.empty())
        {
            while (cur)
            {
                s.push(cur);
                v.push_back(cur->val);
                cur = cur->left;
            }

            TreeNode* top = s.top();
            s.pop();

            cur = top->right;
        }

        return v;

    }
};



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> v;
        TreeNode* cur = root;
        while (cur || !s.empty())
        {
            while (cur)
            {
                s.push(cur);
                cur = cur->left;
            }

            TreeNode* top = s.top();
            s.pop();
            v.push_back(top->val);
            cur = top->right;
        }

        return v;

    }
};


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> v;
        TreeNode* cur = root;
        TreeNode* prev = nullptr;
        while (cur || !s.empty())
        {
            // 1 ������·�ڵ� ��ջ
            while (cur)
            {
                s.push(cur);
                cur = cur->left;
            }

            //2 ���η�����·�ڵ��������
            TreeNode* top = s.top();

            //ջ����ȡ��top����top���������Լ���������
            //1 ��ǰ�ڵ�������Ϊ��, ����ʵ�ǰ�ڵ�
            //������������Ϊ��, ������һ�����ʽڵ����������ĸ�, �����������Ѿ�������
            //2 ������������� ������
            if (top->right == nullptr || top->right == prev)
            {
                v.push_back(top->val);
                s.pop();
                prev = top;
            }

            else
            {
                cur = top->right;
            }
        }

        return v;

    }
};