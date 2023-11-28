#pragma once
typedef char element; //연결 큐 원소의 자료형을 char로 정의
typedef struct QNode {//연결 큐의 노드를 구조체로 정의ㅣ
    element data;
    struct QNode* link;
} QNode;

typedef struct      //연결 큐에서 사용하는 포인터 front와 rear를 구조체로 정의
{
    QNode* front, * rear;
} LQueueType;

LQueueType* createLinkedQueue(void);
int isLQEmpty(LQueueType* LQ);
void enLQueue(LQueueType* LQ, element item);
element deLQUeue(LQueueType* LQ);
element peekLQ(LQueueType* LQ);
void printfLQ(LQueueType* LQ);