#define _CRT_SECURE_NO_WARNINGS 1


int sumOfLeftLeaves(struct TreeNode* root) {
    // write code here
    if (root == NULL)
    {
        return 0;
    }

    int sum = 0;
    if (root->left && root->left->left == NULL && root->left->right == NULL)
    {
        sum = root->left->val;
    }

    return sum + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
}



#include <stdio.h>
#include<stdlib.h>

typedef struct ListNode {
    struct ListNode* next;
    int val;
}ListNode;

ListNode* BuyNode(int x)
{
    ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
    if (newnode == NULL)
    {
        perror("malloc fail");
    }
    newnode->next = NULL;
    newnode->val = x;
    return newnode;
}
ListNode* CreatList(int n)
{
    ListNode* phead, * ptail;
    int i = 1;
    phead = ptail = BuyNode(i++);
    while (i <= n)
    {
        ptail->next = BuyNode(i++);
        ptail = ptail->next;
    }
    ptail->next = phead;
    return phead;
}

int ysf(int n, int m)
{
    ListNode* head = CreatList(n);
    ListNode* cur = head;
    ListNode* prev = NULL;
    int i = 1;
    while (cur->next != cur)
    {
        if (i == m)
        {
            prev->next = cur->next;
            free(cur);
            cur = prev->next;
            i = 1;
        }
        else
        {
            prev = cur;
            cur = cur->next;
            i++;
        }

    }

    return cur->val;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int ret = ysf(a, b);
    printf("%d", ret);
    return 0;
}