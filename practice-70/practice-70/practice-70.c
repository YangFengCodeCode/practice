#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
//
//
//
////遍历字符串
//void Next(int* next, int size, const char* s);
//
////检查是否有完全重复的字串
//bool HaveCompletelyRepeatString(char* s);
//
//
//int main(int argc, char** argv) 
//{
//
//	char* s = "APPAPPLPQ";
//	bool ans = HaveCompletelyRepeatString(s);
//	printf("%s have substing ? %c", s, ans ? 'Y' : 'N');
//	return 0;
//}
//
//
//
//
//
////遍历字符串
//void
//Next(int* next, int size, const char* s) {
//	//用来标记重复字串的索引
//	next[0] = -1;
//	//重复字符索引，在当前字符以前
//	int j = -1;
//	for (int i = 1; i < size; ++i) {
//		//有重复的，但是后面字符不重复
//		while (j >= 0 && s[i] != s[j + 1])
//			j = next[j];//复位索引为-1
//
//		//拿后面的比较前面的
//		if (s[i] == s[j + 1])
//			++j;
//
//		//后面的更新为j
//		next[i] = j;
//	}
//}
//
////检查是否有完全重复的字串
//bool
//HaveCompletelyRepeatString(char* s) {
//	//空字符串
//	if (*s == '\0')
//		return false;
//
//	//计算字符串总长
//	int size = 0;
//	while (s[size] != '\0')
//		++size;
//
//	int next[256];
//
//	//从第二个字符扫描到最后一个字符
//	Next(next, size, s);
//
//	//最后一个字符为-1表示无重复的字串
//	//第一个字串长度为size-next[size-1]-1,只有总长度是第一个字符串长度倍数的时候，才说明字符串存在完全重复的字串
//	if (next[size - 1] != -1 && size % (size - next[size - 1] - 1) == 0)
//		return true;
//	return false;
//}




#include<stdio.h>

//void InsertSort(int* a, int n)
//{
//	int i = 0;
//	for (size_t i = 0; i < n - 1; i++)
//	{
//		int end = i;
//		int tmp = a[end + 1];
//		while (end >= 0)
//		{
//			if (a[end] > tmp)
//			{
//				a[end + 1] = a[end];
//			}
//			else
//			{
//				break;
//			}
//			end--;
//		}
//		a[end + 1] = tmp;
//	}
//}


//void InsertSort(int* a, int n)
//{
//	int i = 0;
//	for (size_t i = 0; i < n - 1; i++)
//	{
//		int end = i;
//		int tmp = a[end + 1];
//		while (end >= 0)
//		{
//			if (a[end] > tmp)
//			{
//				a[end + 1] = a[end];
//			}
//			else
//			{
//				break;
//			}
//			end--;
//		}
//		a[end + 1] = tmp;
//	}
//
//}
//
////希尔排序
//void ShellSort(int* a, int n)
//{
//	int gap = n;
//	while (gap > 1)
//	{
//		gap = gap / 2;
//		for (size_t j = 0; j < gap; j++)
//		{
//			for (size_t i = j; i < n - gap; i += gap)
//			{
//				int end = i;
//				int tmp = a[end + gap];
//				while (end >= 0)
//				{
//					if (a[end] > tmp)
//					{
//						a[end + gap] = a[end];
//						end -= gap;
//					}
//					else
//					{
//						break;
//					}
//				}
//				a[end + gap] = tmp;
//			}
//		}
//	}
//
//}
//
//
//void ShellSort(int* a, int n)
//{
//
//}
//int main()
//{
//	int arr[] = { 1,3,2,5,4,7,9 };
//	InsertSort(arr, 7);
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//
//



//bool isUnivalTree(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return true;
//    }
//    if (root->left && root->val != root->left->val)
//    {
//        return false;
//    }
//
//    if (root->right && root->val != root->right->val)
//    {
//        return false;
//    }
//
//    return isUnivalTree(root->left) && isUnivalTree(root->right);
//
//}

/*
* Definition for a binary tree node.
* struct TreeNode {
    *int val;
    *struct TreeNode* left;
    *struct TreeNode* right;
    *
};
*/
//bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
//    if (p == NULL && q == NULL)
//    {
//        return true;
//    }
//
//    if (p == NULL || q == NULL)//这里是说只有一个为空 另一个不为空  两个都为空的情况已经被上个判断语句排除了
//    {
//        return false;
//    }
//
//    if (p->val != q->val)
//    {
//        return false;
//    }
//
//    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//
//}



///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     struct TreeNode *left;
// *     struct TreeNode *right;
// * };
// */
//
//bool  isSametree(struct TreeNode* p, struct TreeNode* q)
//{
//    if (p == NULL && q == NULL)
//    {
//        return true;
//    }
//
//    if (p == NULL || q == NULL)
//    {
//        return false;
//    }
//
//    if (p->val != q->val)
//    {
//        return false;
//    }
//
//    return isSametree(p->left, q->left) && isSametree(p->right, q->right);
//}
//bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
//    if (root == NULL)
//    {
//        return false;
//    }
//    if (root->val == subRoot->val)
//    {
//        if (isSametree(root, subRoot))
//        {
//            return true;
//        }
//    }
//
//    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
//
//}


///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     struct TreeNode *left;
// *     struct TreeNode *right;
// * };
// */
// /**
//  * Note: The returned array must be malloced, assume caller calls free().
//  */
//
//
//int TreeSize(struct TreeNode* root)
//{
//    return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
//}
//
//void PrevOrder(struct TreeNode* root, int* a, int* i)//这里的i 之所以传指针是因为递归的时候要保存上一次i的值 
//{
//    if (root == NULL)
//    {
//        return;
//    }
//    a[*i] = root->val;
//    (*i)++;
//    PrevOrder(root->left, a, i);
//    PrevOrder(root->right, a, i);
//}
//int* preorderTraversal(struct TreeNode* root, int* returnSize) {
//    int n = TreeSize(root);
//    int* a = (int*)malloc(sizeof(int) * n);
//    int j = 0;
//    PrevOrder(root, a, &j);//这里j取地址
//    *returnSize = n;
//    return a;
//}


///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     struct TreeNode *left;
// *     struct TreeNode *right;
// * };
// */
//
//
//int maxDepth(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return 0;
//    }
//    int ret1 = maxDepth(root->left);
//    int ret2 = maxDepth(root->right);
//    return (fmax(ret1, ret2) + 1);
//
//}


///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     struct TreeNode *left;
// *     struct TreeNode *right;
// * };
// */
//
//bool isSameTree(struct TreeNode* p, struct TreeNode* q)
//{
//    if (p == NULL && q == NULL)
//    {
//        return true;
//    }
//
//    if (p == NULL || q == NULL)
//    {
//        return false;
//    }
//
//    if (p->val != q->val)
//    {
//        return false;
//    }
//
//    return isSameTree(p->left, q->right) && isSameTree(p->right, q->left);
//}
//bool isSymmetric(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return NULL;
//    }
//
//    return isSameTree(root->left, root->right);
//}


#include <stdio.h>
#include<stdlib.h>
typedef struct BianryTreeNode
{
    struct BianryTreeNode* left;
    struct BianryTreeNode* right;
    char val;
}BTNode;

BTNode* CreatTree(char* a, int* i)//前序遍历
{
    if (a[*i] == '#')
    {
        (*i)++;
        return  NULL;
    }

    BTNode* root = (BTNode*)malloc(sizeof(BTNode));
    root->val = a[*i];
    (*i)++;
    root->left = CreatTree(a, i);
    root->right = CreatTree(a, i);
    return root;
}

void PrintInOrder(BTNode* root)//中序遍历
{
    if (root == NULL)
    {
        return;
    }
    PrintInOrder(root->left);
    printf("%c ", root->val);
    PrintInOrder(root->right);
}
int main() {
    char arr[100];
    scanf("%s", arr);
    int i = 0;
    BTNode* root = CreatTree(arr, &i);
    PrintInOrder(root);
    return 0;
}