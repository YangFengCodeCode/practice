//typedef struct {
//    int* a;
//    int front;
//    int rear;
//    int k;
//} MyCircularQueue;
//
//
//MyCircularQueue* myCircularQueueCreate(int k) {
//    MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//    obj->a = (int*)malloc(sizeof(int) * (k + 1));//多开一个空间
//    obj->front = obj->rear = 0;
//    obj->k = k;
//    return obj;
//}
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
//    return obj->front == obj->rear;
//}
//
//bool myCircularQueueIsFull(MyCircularQueue* obj) {
//    return (obj->rear + 1) % (obj->k + 1) == obj->front;
//}
//
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
//    if (myCircularQueueIsFull(obj))
//    {
//        return false;
//    }
//    obj->a[obj->rear] = value;
//    obj->rear++;
//    obj->rear %= (obj->k + 1);
//    return true;
//}
//
//bool myCircularQueueDeQueue(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//    {
//        return false;
//    }
//    obj->front++;
//    obj->front %= (obj->k + 1);
//    return true;
//}
//
//int myCircularQueueFront(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//    {
//        return -1;
//    }
//    else
//    {
//        return obj->a[obj->front];
//    }
//
//}
//
//int myCircularQueueRear(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//    {
//        return -1;
//    }
//    else {
//        return obj->a[(obj->rear + obj->k) % (obj->k + 1)];
//    }
//
//}
//
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//    free(obj->a);
//    free(obj);
//}



//typedef int STDataType;
//typedef struct Stack
//{
//    STDataType* a;
//    int top;
//    int capacity;
//}ST;
//
//void STInit(ST* ps)
//{
//    assert(ps);
//    ps->a = NULL;
//    ps->top = 0;
//    ps->capacity = 0;
//}
//
//void STDestroy(ST* ps)
//{
//    assert(ps);
//    free(ps->a);
//    ps->a = 0;
//    ps->top = ps->capacity = 0;
//}
//
//void STPush(ST* ps, STDataType x)
//{
//    assert(ps);
//    if (ps->top == ps->capacity)
//    {
//        int newcapacity = (ps->capacity == 0 ? 4 : ((ps->capacity) * 2));
//        STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newcapacity);
//        if (tmp == NULL)
//        {
//            perror("realloc fail");
//            exit(-1);
//        }
//        ps->a = tmp;
//        ps->capacity = newcapacity;
//    }
//
//    ps->a[ps->top] = x;
//    ps->top++;
//}
//
//void STPop(ST* ps)
//{
//    assert(ps);
//    assert(ps->top > 0);
//    ps->top--;
//}
//
//STDataType STTop(ST* ps)
//{
//    assert(ps);
//    assert(ps->top > 0);
//    return ps->a[ps->top - 1];
//}
//
//int STSize(ST* ps)
//{
//    assert(ps);
//    return ps->top;
//}
//
//bool STEmpty(ST* ps)
//{
//    assert(ps);
//    return ps->top == 0;
//}
//
//
//typedef struct {
//    ST StackPush;
//    ST StackPop;
//
//} MyQueue;
//
//
//MyQueue* myQueueCreate() {
//    MyQueue* pqueue = (MyQueue*)malloc(sizeof(MyQueue));
//    STInit(&pqueue->StackPush);
//    STInit(&pqueue->StackPop);
//    return pqueue;
//}
//
//void myQueuePush(MyQueue* obj, int x) {
//    STPush(&obj->StackPush, x);
//}
//
//int myQueuePeek(MyQueue* obj) {
//    if (STEmpty(&obj->StackPop))
//    {
//        while (!STEmpty(&obj->StackPush))
//        {
//            STPush(&obj->StackPop, STTop(&obj->StackPush));
//            STPop(&obj->StackPush);
//        }
//    }
//    return STTop(&obj->StackPop);
//
//}
//
//
//int myQueuePop(MyQueue* obj) {
//    int front = myQueuePeek(obj);
//    STPop(&obj->StackPop);
//    return front;
//}
//
//
//bool myQueueEmpty(MyQueue* obj) {
//    return STEmpty(&obj->StackPush) && STEmpty(&obj->StackPop);
//}
//
//void myQueueFree(MyQueue* obj) {
//    STDestroy(&obj->StackPush);
//    STDestroy(&obj->StackPop);
//    free(obj);
//}



//typedef char STDataType;
//typedef struct Stack
//{
//    STDataType* a;
//    int top;
//    int capacity;
//}ST;
//
//void STInit(ST* ps)
//{
//    assert(ps);
//    ps->a = NULL;
//    ps->top = ps->capacity = 0;
//}
//
//void STDestroy(ST* ps)
//{
//    assert(ps);
//    free(ps->a);
//    ps->a = NULL;
//    ps->top = ps->capacity = 0;
//}
//
//void STPush(ST* ps, STDataType x)
//{
//    assert(ps);
//    if (ps->top == ps->capacity)
//    {
//        int newcapacity = (ps->capacity == 0 ? 4 : ps->capacity * 2);
//        STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newcapacity);
//        if (tmp == NULL)
//        {
//            perror("realloc fail");
//            exit(-1);
//        }
//        ps->a = tmp;
//        ps->capacity = newcapacity;
//    }
//    ps->a[ps->top] = x;
//    ps->top++;
//}
//
//void STPop(ST* ps)
//{
//    assert(ps);
//    assert(ps->top > 0);
//    ps->top--;
//}
//
//STDataType STTop(ST* ps)
//{
//    assert(ps);
//    assert(ps->top > 0);
//    return ps->a[ps->top - 1];
//}
//
//int STSize(ST* ps)
//{
//    assert(ps);
//    return ps->top;
//}
//
//bool STEmpty(ST* ps)
//{
//    assert(ps);
//    return ps->top == 0;
//}
//
//
//bool isValid(char* s) {
//    ST st;
//    STInit(&st);
//    while (*s)
//    {
//        if (*s == '(' || *s == '{' || *s == '[')
//        {
//            STPush(&st, *s);
//        }
//        else
//        {
//            if (STEmpty(&st))
//            {
//                STDestroy(&st);
//                return false;
//            }
//
//            char topval = STTop(&st);
//            STPop(&st);
//            if ((*s == ']' && topval != '[') || (*s == ')' && topval != '(') || (*s == '}' && topval != '{'))
//            {
//                STDestroy(&st);
//                return false;
//            }
//        }
//        s++;
//    }
//
//    bool ret = STEmpty(&st);
//    STDestroy(&st);
//    return ret;
//}




typedef int QDataType;
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
	int size;
}Que;


void QueueInit(Que* pq)
{
	assert(pq);

	pq->head = pq->tail = NULL;
	pq->size = 0;
}

void QueueDestroy(Que* pq)
{
	assert(pq);

	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}

	pq->head = pq->tail = NULL;
	pq->size = 0;
}

void QueuePush(Que* pq, QDataType x)
{
	assert(pq);

	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}

	newnode->data = x;
	newnode->next = NULL;

	if (pq->tail == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}

	pq->size++;
}

bool QueueEmpty(Que* pq)
{
	assert(pq);
	return pq->head == NULL;
}

void QueuePop(Que* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}

	pq->size--;
}

QDataType QueueFront(Que* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->head->data;
}

QDataType QueueBack(Que* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->tail->data;
}


int QueueSize(Que* pq)
{
	assert(pq);

	return pq->size;
}

typedef struct {
	Que q1;
	Que q2;
} MyStack;


MyStack* myStackCreate() {
	MyStack* pst = (MyStack*)malloc(sizeof(MyStack));
	QueueInit(&pst->q1);
	QueueInit(&pst->q2);
	return pst;
}

void myStackPush(MyStack* obj, int x) {
	if (!QueueEmpty(&obj->q1))
	{
		QueuePush(&obj->q1, x);
	}
	else
	{
		QueuePush(&obj->q2, x);
	}
}

int myStackPop(MyStack* obj) {
	Que* empty = &obj->q1;
	Que* nonempty = &obj->q2;
	if (!QueueEmpty(&obj->q1))
	{
		nonempty = &obj->q1;
		empty = &obj->q2;
	}
	while (QueueSize(nonempty) > 1)
	{
		QueuePush(empty, QueueFront(nonempty));
		QueuePop(nonempty);
	}

	int top = QueueFront(nonempty);
	QueuePop(nonempty);
	return top;
}

int myStackTop(MyStack* obj) {
	if (!QueueEmpty(&obj->q1))
	{
		return QueueBack(&obj->q1);
	}
	else
	{
		return QueueBack(&obj->q2);
	}
}

bool myStackEmpty(MyStack* obj) {
	return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
}

void myStackFree(MyStack* obj) {
	QueueDestroy(&obj->q1);
	QueueDestroy(&obj->q2);
	free(obj);
}
