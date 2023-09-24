#include"Stack.h"

//��ʼ��
void STInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

//����
void STDestroy(ST* ps)
{
	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}


//����
void STPush(ST* ps, STDataType x)
{
	assert(ps);

	//����Ƿ�����
	if (ps->top == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity *2;//������
		STDataType tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * (newCapacity));//reallocҲ����ԭ������
		if (tmp == NULL)
		{
			perror("realloc failed");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newCapacity;
	}

	//����
	ps->a[ps->top] = x;
	ps->top++;//top��ջ������һ��λ��
}


//ɾ��
void STPop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}



//����ջ��Ԫ��
STDataType STTop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}

//�����С
int STSize(ST* ps)
{
	assert(ps);
	return ps->top;
}

//�ж��Ƿ�Ϊ��
bool STEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}
