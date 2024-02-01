#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"


void Test1()
{
	SL s1;
	SLInit(&s1);
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPushBack(&s1, 5);
	SLPrint(&s1);
	SLDestroy(&s1);

}


void Test2()
{
	SL s1;
	SLInit(&s1);
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPrint(&s1);

	SLPopBack(&s1);
	SLPrint(&s1);
	SLDestroy(&s1);

}

void Test3()
{
	SL s1;
	SLInit(&s1);
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPrint(&s1);

	SLPushFront(&s1, 5);
	SLPrint(&s1);
	SLDestroy(&s1);

}


void Test4()
{
	SL s1;
	SLInit(&s1);
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPrint(&s1);

    SLPushFront(&s1, 5);
	SLPopFront(&s1);

	SLPrint(&s1);
	SLDestroy(&s1);

}

void Test5()
{
	SL s1;
	SLInit(&s1);
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPrint(&s1);

	SLInsert(&s1, 2, 5);

	SLPrint(&s1);
	SLDestroy(&s1);

}


void Test6()
{
	SL s1;
	SLInit(&s1);
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPrint(&s1);

	SLInsert(&s1, 2, 5);
	SLPrint(&s1);

	SLErase(&s1, 2);
	SLPrint(&s1);
	SLDestroy(&s1);

}
int main()
{
	Test6();
	return 0;
}