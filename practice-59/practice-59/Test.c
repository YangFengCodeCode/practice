#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

void Test1()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPushBack(plist, 5);
	LTPrint(plist);

	LTPopBack(plist);
	LTPrint(plist);

	LTPushFront(plist, 40);
	LTPrint(plist);

	LTPopFront(plist);
	LTPrint(plist);

	LTNode* pos1 = LTFind(plist, 4);
	LTInsert(pos1, 50);
	LTPrint(plist);

	LTNode* pos2 = LTFind(plist, 50);
	LTErase(pos2);
	LTPrint(plist);
}

int main()
{
	Test1();
	return 0;
}