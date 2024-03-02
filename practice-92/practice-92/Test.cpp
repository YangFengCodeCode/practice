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
            // 1 访问左路节点 进栈
            while (cur)
            {
                s.push(cur);
                cur = cur->left;
            }

            //2 依次访问左路节点的右子树
            TreeNode* top = s.top();

            //栈里提取到top代表top的左子树以及访问完了
            //1 当前节点右子树为空, 则访问当前节点
            //或者右子树不为空, 但是上一个访问节点是右子树的跟, 代表右子树已经访问了
            //2 否则访问右子树 子问题
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