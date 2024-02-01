#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"


typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	int val;
}BTNode;

BTNode* BuyNode(int x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	node->left = NULL;
	node->right = NULL;
	node->val = x;
	return node;
}


//前序遍历
void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	printf("%d ", root->val);
	PrevOrder(root->left);
	PrevOrder(root->right);
}


//中序遍历
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	InOrder(root->left);
	printf("%d ", root->val);
	InOrder(root->right);
}

//后序遍历
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->val);
}



void QueueInit(Que* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
	pq->size = 0;
}

void QueueDestroy(Que* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
	pq->size = 0;
}

void QueuePush(Que* pq, QDataType x)
{
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	newnode->next = NULL;
	newnode->val = x;

	if (pq->tail == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
	pq->size++;

}

bool QueueEmpty(Que* pq)
{
	assert(pq);
	return pq->head == NULL;
}


void QueuePop(Que* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
	pq->size--;
}

QDataType QueueFront(Que* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->head->val;
}

void LevelOrder(BTNode* root)
{
	Que q;
	QueueInit(&q);
	if (root)
	{
		QueuePush(&q, root);
	}

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		printf("%d ", front->val);
		if (front->left)
		{
			QueuePush(&q, front->left);
		}
		if (front->right)
		{
			QueuePush(&q, front->right);
		}

		QueuePop(&q);
	}
}


//二叉树的销毁
 
void TreeDestroy(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}

	TreeDestroy(root->left);
	TreeDestroy(root->right);
	free(root);

}


//节点个数

//int size = 0;
//int TreeSize(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	else
//	{
//		size++;
//	}
//
//	TreeSize(root->left);
//	TreeSize(root->right);
//	return size;
//}


int TreeSize(BTNode* root)
{
	return root == 0 ? NULL : TreeSize(root->left) + TreeSize(root->right) + 1;
}

int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}

	return TreeLeafSize(root->left) + TreeLeafSize(root->right);
}

int TreeKLevel(BTNode* root, int k)
{
	assert(k > 0);
	if (root == NULL)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}

	return TreeKLevel(root->left, k-1) + TreeKLevel(root->right, k-1);
}


BTNode* TreeFind(BTNode* root, int x)
{
	if (root == NULL)
	{
		return NULL;
	}

	if (root->val == x)
	{
		return root;
	}

	BTNode* ret = NULL;
	ret = TreeFind(root->left, x);
	if (ret)
	{
		return ret;
	}
	ret = TreeFind(root->right, x);
	if (ret)
	{
		return ret;
	}
	
}




int main()
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);

	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;


	PrevOrder(node1);
	printf("\n");

	InOrder(node1);
	printf("\n");

	PostOrder(node1);
	printf("\n");

	LevelOrder(node1);
	printf("\n");

	int count1 = TreeSize(node1);
	printf("%d ", count1);
	printf("\n");

	int count2 = TreeLeafSize(node1);
	printf("%d ", count2);
	printf("\n");

	int count3 = TreeKLevel(node1, 2);
	printf("%d ", count3);
	printf("\n");

	return 0;


	/*int myNum = 9;
	float myFloatNum = 9.9;
	char myWord = 'Y';
	printf("%d\n", myNum);
	printf("%f\n", myFloatNum);
	printf("%c\n", myWord);


	printf("welcome to fcs\n");

	printf("thet call him \"jim\".\n");*/


}