#define _CRT_SECURE_NO_WARNINGS 1

#include"Heap.h"

int main()
{
	int a[] = { 2,3,5,7,4,6,8,65,100,70,32,50,60 };
	HP hp;
	HeapInit(&hp);
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		HeapPush(&hp, a[i]);
	}
	HeapPrint(&hp);

	while (!HeapEmpty(&hp))
	{
		printf("%d ", HeapTop(&hp));
		HeapPop(&hp);
	}

	HeapDestroy(&hp);

	return 0;
}
