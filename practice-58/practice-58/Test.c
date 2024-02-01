#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"
void TestSList1()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);//传地址 才能改变结构体
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPrint(plist);

}


void TestSList2()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);//传地址 才能改变结构体
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPrint(plist);

	SLTPushFront(&plist, 6);
	SLTPrint(plist);

}


void TestSList3()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);//传地址 才能改变结构体
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);
}


void TestSList4()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);//传地址 才能改变结构体
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);
}



void TestSList5()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);//传地址 才能改变结构体
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPushBack(&plist, 6);
	SLTPrint(plist);

	SLTPushFront(&plist, 40);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	int x = 0;
	scanf("%d", &x);
	SLTNode* pos = SLTFind(plist, x);

	SLTInsertAfter(pos, 50);
	SLTInsert(&plist, pos, 40);
	SLTPrint(plist);

	SLTEraseAfter(pos);
	SLTPrint(plist);

	SLTErase(&plist, pos);
	SLTPrint(plist);
}
int main()
{
	TestSList5();
	return 0;
}
