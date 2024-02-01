#include"SList.h"


// �������� -- ��ɾ���
void SLInit(SL* ps)
{
	assert(ps);
	ps->a = (SLDataType*)malloc(sizeof(SLDataType)*4);
	if (ps->a == NULL)
	{
		perror("malloc failed");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = 4;
}

//����
void SLDestroy(SL* ps)
{
	asser(ps);
	free(ps->a);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;

}

//��ӡ
void SLPrint(SL* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

//����
void SLCheckCapacity(SL* ps)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		int tmp = (SLDataType*)realloc(a, sizeof(SLDataType) * 2);
		if (tmp == NULL)
		{
			perror("realloc failed");
			exit(-1);
		}

		ps->a = tmp;
		ps->capacity *= 2;
	}

}



