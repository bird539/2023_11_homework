#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "LinkedQueue.h"

//���� ���� ť�� �����ϴ� ����
LQueueType* createLinkedQueue(void) {
    LQueueType* LQ;
    LQ = (LQueueType*)malloc(sizeof(LQueueType));
    LQ->front = NULL;
    LQ->rear = NULL;
    return LQ;
}

//���� ť�� ���� �������� �˻��ϴ� ����
int isLQEmpty(LQueueType* LQ) {
    if (LQ->front == NULL) {
        printf("Linked Queue is empty!");
        return 1;
    }
    else return 0;
}

//���� ť�� rear�� ���Ҹ� �����ϴ� ����
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

//���� ť���� ���Ҹ� �����ϰ� ��ȯ�ϴ� ����
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

//���� ť���� ���Ҹ� �˻��ϴ� ����
element peekLQ(LQueueType* LQ) {
    element item;
    if (isLQEmpty(LQ)) return;
    else {
        item = LQ->front->data;
        return item;
    }
}

// ���� ť�� ���Ҹ� ����ϴ� ���� �� ������ �°� ��³��� ����!
void printfLQ(LQueueType* LQ) {
    QNode* temp = LQ->front;
    
    while (temp)
    {
        printf("%3d", temp->data);
        temp = temp->link;
    }

}


int main(void) {
    LQueueType* q1 = createLinkedQueue(); //���� ť ����
    LQueueType* q2 = createLinkedQueue(); //���� ť ����
    element data;
    int range, turm;


    printf("�ο��� N: ");
    scanf("%d", &range);

    printf("������ N: ");
    scanf("%d", &turm);

    //����  enLQueue(LQ, 'A');
    for (int i = 1; i <= range; i++) {
        enLQueue(q1, i);
    }
    //����Ʈ  printfLQ(LQ);
    //data = peekLQ(LQ);
    //���� data = deLQUeue(LQ);
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