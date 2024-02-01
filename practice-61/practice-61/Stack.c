#include"Stack.h"

//初始化
void STInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

//销毁
void STDestroy(ST* ps)
{
	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}


//插入
void STPush(ST* ps, STDataType x)
{
	assert(ps);

	//检查是否扩容
	if (ps->top == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity *2;//扩两倍
		STDataType tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * (newCapacity));//realloc也可以原地扩容
		if (tmp == NULL)
		{
			perror("realloc failed");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newCapacity;
	}

	//插入
	ps->a[ps->top] = x;
	ps->top++;//top是栈顶的下一个位置
}


//删除
void STPop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}



//返回栈顶元素
STDataType STTop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}

//计算大小
int STSize(ST* ps)
{
	assert(ps);
	return ps->top;
}

//判断是否为空
bool STEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}
