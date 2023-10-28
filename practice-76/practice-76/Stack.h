#pragma once
#include<iostream>
using namespace std;
typedef int DataType;
class Stack
{
public:
	//���캯��
	Stack(int capacity = 3);
	//��������
	Stack(Stack& st);
	//��������
	~Stack();

	//����
	void Push(DataType x);

	//ɾ��
	void Pop();

	//��ӡ
	void Print();
private:
	int* _a;
	int _top;
	int _capacity;
};
