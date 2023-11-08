#include <stdio.h>
#include "LinkedQueue.h"

int main(void){
    LQueueType* LQ = createLinkedQueue(); //연결 큐 생성
    element data;

    printf("\n ======연결 큐연산=====\n");
    printf("\n 삽입 A>>"); enLQueue(LQ, 'A'); printfLQ(LQ);
    printf("\n 삽입 B>>"); enLQueue(LQ, 'B'); printfLQ(LQ);
    printf("\n 삽입 C>>"); enLQueue(LQ, 'C'); printfLQ(LQ);
    data = peekLQ(LQ); 
    printf("\n peek item : %c \n", data);

    printf("\n 삭제 >>"); data = deLQUeue(LQ); printfLQ(LQ);
    printf("\n 삭제 데이터 %c", data);

    printf("\n 삭제 >>"); data = deLQUeue(LQ); printfLQ(LQ);
    printf("\n 삭제 데이터 %c", data);

    printf("\n 삭제 >>"); data = deLQUeue(LQ); printfLQ(LQ);
    printf("\n 삭제 데이터 %c", data);

    printf("\n 삽입 D>>"); enLQueue(LQ, 'D'); printfLQ(LQ);
    printf("\n 삽입 E>>"); enLQueue(LQ, 'E'); printfLQ(LQ);
}