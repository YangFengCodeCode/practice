#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

void Test1()
{
	Stack st1;
	Stack st2(st1);
	st1.Push(1);
	st1.Push(2);
	st1.Push(3);
	st1.Push(4);
	st1.Print();

	st1.Pop();
	st1.Print();

	

}

int main()
{
	Test1();
	return 0;
}