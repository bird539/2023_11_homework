#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "LinkedQueue.h"

//공백 연결 큐를 생성하는 연산
LQueueType* createLinkedQueue(void) {
    LQueueType* LQ;
    LQ = (LQueueType*)malloc(sizeof(LQueueType));
    LQ->front = NULL;
    LQ->rear = NULL;
    return LQ;
}

//연결 큐가 공백 상태인지 검사하는 연산
int isLQEmpty(LQueueType* LQ) {
    if (LQ->front == NULL) {
        printf("Linked Queue is empty!");
        return 1;
    }
    else return 0;
}

//연결 큐의 rear에 원소를 삽입하는 연산
void enLQueue(LQueueType* LQ, element item) {
    QNode* newNode = (QNode*)malloc(sizeof(QNode));
    newNode->data = item;
    newNode->link = NULL;
    if (LQ->front == NULL) {
        LQ->front = newNode;
        LQ->rear = newNode;
    }
    else {
        LQ->rear->link = newNode;
        LQ->rear = newNode;
    }
}

//연결 큐에서 원소를 삭제하고 반환하는 연산
element deLQUeue(LQueueType* LQ) {
    QNode* old = LQ->front;
    element item;
    if (isLQEmpty(LQ))return;
    else {
        item = old->data;
        LQ->front = LQ->front->link;
        if (LQ->front == NULL)
            LQ->rear = NULL;
        free(old);
        return item;
    }
}

//연결 큐에서 원소를 검색하는 연산
element peekLQ(LQueueType* LQ) {
    element item;
    if (isLQEmpty(LQ)) return;
    else {
        item = LQ->front->data;
        return item;
    }
}

// 연결 큐의 원소를 출력하는 연산 → 문제에 맞게 출력내용 수정!
void printfLQ(LQueueType* LQ) {
    QNode* temp = LQ->front;
    
    while (temp)
    {
        printf("%3d", temp->data);
        temp = temp->link;
    }

}


int main(void) {
    LQueueType* q1 = createLinkedQueue(); //연결 큐 생성
    LQueueType* q2 = createLinkedQueue(); //연결 큐 생성
    element data;
    int range, turm;


    printf("인원수 N: ");
    scanf("%d", &range);

    printf("선택자 N: ");
    scanf("%d", &turm);

    //삽입  enLQueue(LQ, 'A');
    for (int i = 1; i <= range; i++) {
        enLQueue(q1, i);
    }
    //프린트  printfLQ(LQ);
    //data = peekLQ(LQ);
    //삭제 data = deLQUeue(LQ);
    int j = 0;
    //printf(" = %d\n", q1->front->data);

    int q1Len = range;
    int q2Len = 0;
    for (int j = 1; j <= range; j++) {
        if (q1Len > turm) {
            for (int i = 1; i <= turm; i++) {
                QNode* temp = q1->front;

                if (i == turm) {
                    enLQueue(q2, temp->data);
                    q1Len -= 1;
                }
                else {
                    enLQueue(q1, temp->data);
                    q1Len += 1;
                }
                deLQUeue(q1);
            }
        }

        else if (q1Len <= turm)
        {
            for (int i = 1; i <= q1Len; i++) {
                QNode* temp = q1->front;
                enLQueue(q2, temp->data);
                deLQUeue(q1);
                q2Len -= 1;
                q1Len += 1;
            }
        }
    }
    printfLQ(q2);
    printf("\n\n");
}