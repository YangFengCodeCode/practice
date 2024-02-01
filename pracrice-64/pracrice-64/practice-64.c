#define _CRT_SECURE_NO_WARNINGS 1

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

void QueInit(Que* pq)
{
    assert(pq);
    pq->head = NULL;
    pq->tail = NULL;
    pq->size = 0;
}

void QuePush(Que* pq, QDataType x)
{
    assert(pq);
    QNode* newnode = (QNode*)malloc(sizeof(QNode));
    if (newnode == NULL)
    {
        perror("malloc fail");
        exit(-1);
    }
    newnode->next = NULL;
    newnode->data = x;
    if (pq->tail == NULL)
    {
        pq->tail = pq->head = newnode;
    }
    else
    {
        pq->tail->next = newnode;
        pq->tail = newnode;
    }
    pq->size++;
}

int QueEmpty(Que* pq)
{
    assert(pq);
    if (pq->head == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void QuePop(Que* pq)
{
    assert(pq);
    assert(!QueEmpty(pq));
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

int QueSize(Que* pq)
{
    assert(pq);
    return pq->size;
}

QDataType QueFront(Que* pq)
{
    assert(pq);
    assert(!QueEmpty(pq));
    return pq->head->data;
}

QDataType QueBack(Que* pq)
{
    assert(pq);
    assert(!QueEmpty(pq));
    return pq->tail->data;
}

void QueDestroy(Que* pq)
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

typedef struct {
    Que q1;
    Que q2;
} MyStack;


MyStack* myStackCreate() {
    MyStack* pst = (MyStack*)malloc(sizeof(MyStack));
    QueInit(&(pst->q1));
    QueInit(&(pst->q2));
    return pst;
}

void myStackPush(MyStack* obj, int x) {
    if (!QueEmpty(&obj->q1))
    {
        QuePush(&obj->q1, x);
    }
    else
    {
        QuePush(&obj->q2, x);
    }
}

int myStackPop(MyStack* obj) {
    Que* empty = &obj->q1;
    Que* nonempty = &obj->q2;
    if (!QueEmpty(&obj->q1))
    {
        nonempty = &obj->q1;
        empty = &obj->q2;
    }
    while (QueSize(nonempty) > 1)
    {
        QuePush(empty, QueFront(nonempty));
        QuePop(QueFront(nonempty));
    }

    int top = QueFront(nonempty);
    QuePop(nonempty);
    return top;
}

int myStackTop(MyStack* obj) {
    if (!QueEmpty(&obj->q1))
    {
        return QueBack(&obj->q1);
    }
    else
    {
        return QueBack(&obj->q2);
    }
}

bool myStackEmpty(MyStack* obj) {
    return QueEmpty(&obj->q1) && QueEmpty(&obj->q2);
}

void myStackFree(MyStack* obj) {
    QueDestroy(&obj->q1);
    QueDestroy(&obj->q2);
    free(obj);
}
