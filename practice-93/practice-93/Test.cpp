#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<queue>
#include<vector>
#include<stack>
#include<string>
#include<map>
#include<algorithm>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
    
};

//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//
//};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        // ����ǿ���ֱ�ӷ���
        vector<vector<int>> ret;
        if (nullptr == root)
            return ret;

        queue<TreeNode*> q;
        q.push(root);   // �Ѿ�����һ��ڵ�ŵ�������

        while (!q.empty())
        {
            // һ���Խ�һ������нڵ�ȫ��������
            vector<int> level;
            int levelSize = q.size();

            // ��for������ڵ������ɺ��Ѿ�����һ��ڵ㱣�浽������
            for (size_t i = 0; i < levelSize; ++i)
            {
                TreeNode* pCur = q.front();
                level.push_back(pCur->val);

                // ����ýڵ��������������ֱ��������������
                if (pCur->left)
                    q.push(pCur->left);

                if (pCur->right)
                    q.push(pCur->right);

                q.pop();
            }

            ret.push_back(level);
        }

        return ret;
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
class Solution2 {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> vv;
        if (root == nullptr)
        {
            return vv;
        }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty())
        {
            vector<int> v;
            int vSize = q.size();
            for (int i = 0; i < vSize; i++)
            {
                TreeNode* front = q.front();
                v.push_back(front->val);
                if (front->left)
                {
                    q.push(front->left);
                }
                if (front->right)
                {
                    q.push(front->right);
                }
                q.pop();
            }
            vv.insert(vv.begin(), v);
        }
        return vv;

    }
};

struct kvCom
{
    bool operator()(const pair<string, int>& p1, const pair<string, int>& p2)
    {
        return p1.second > p2.second || (p1.second == p2.second && p1.first < p2.first);

    }
};

//int main() {
//    string s;
//    map<string, int> wordMap;
//    getline(cin, s);
//    s[0] = tolower(s[0]);
//    auto it = s.begin();
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (s[i] == ' ')
//        {
//            string s0(it, s.begin() + i);
//            it = s.begin() + i + 1;
//            wordMap[s0]++;
//        }
//        if (s[i] == '.')
//        {
//            string s0(it, s.begin() + i);
//            wordMap[s0]++;
//        }
//    }
//
//    vector<pair<string, int>> v(wordMap.begin(), wordMap.end());
//    sort(v.begin(), v.end(), kvCom());
//    for (auto& e : v)
//    {
//        cout << e.first << ':' << e.second << endl;
//    }
//
//    return 0;
//}





int main()
{
    int n;
    cin >> n;
    vector<string> v;
    v.resize(n);
    for (auto& str : v)
        cin >> str;
    bool lenSym = true, lexSym = true;
    // ����Ҫע���i=1��ʼ������ǰ��Ƚϣ��Ƚϳ���
    for (size_t i = 1; i < v.size(); ++i)
    {
        if (v[i - 1].size() >= v[i].size())
        {
            lenSym = false;
            break;
        }
    }

    //�Ƚ�ASCII��
    for (size_t i = 1; i < v.size(); ++i)
    {
        if (v[i - 1] >= v[i])
        {
            lexSym = false;
            break;
        }
    }
    if (lenSym && lexSym)
        cout << "both" << endl;
    else if (!lenSym && lexSym)
        cout << "lexicographically" << endl;
    else if (lenSym && !lexSym)
        cout << "lengths" << endl;
    else if (!lenSym && !lexSym)
        cout << "none" << endl;
    return 0;
}
