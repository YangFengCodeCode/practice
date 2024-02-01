#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"


Test()
{
	Que pq;
	QueueInit(&pq);
	QueuePush(&pq, 1);
	QueuePush(&pq, 2);
	QueuePush(&pq, 3);
	QueuePush(&pq, 4);
	QueuePush(&pq, 5);
	while(!QueueEmpty(&pq))
	{
		printf("%d ", QueueFront(&pq));
		QueuePop(&pq);
	}
	QueueDestroy(&pq);

}


int main()
{
	Test();
	return 0;
}