#pragma once
typedef char element; //���� ť ������ �ڷ����� char�� ����
typedef struct QNode {//���� ť�� ��带 ����ü�� ���Ǥ�
    element data;
    struct QNode* link;
} QNode;

typedef struct      //���� ť���� ����ϴ� ������ front�� rear�� ����ü�� ����
{
    QNode* front, * rear;
} LQueueType;

LQueueType* createLinkedQueue(void);
int isLQEmpty(LQueueType* LQ);
void enLQueue(LQueueType* LQ, element item);
element deLQUeue(LQueueType* LQ);
element peekLQ(LQueueType* LQ);
void printfLQ(LQueueType* LQ);