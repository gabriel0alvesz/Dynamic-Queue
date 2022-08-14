#include "queue.h"

int main(){

    Queue f;

    Queue_CreateQueue(&f);

    Queue_InsertInQueue(&f,1);
    Queue_InsertInQueue(&f,2);
    Queue_InsertInQueue(&f,3);
    Queue_InsertInQueue(&f,4);
    Queue_InsertInQueue(&f,5);
    Queue_InsertInQueue(&f,6);

    Queue_PrintQueue(&f);

    Queue_RemoveFirstQueue(&f);
    Queue_RemoveFirstQueue(&f);
    Queue_RemoveFirstQueue(&f);

    Queue_PrintQueue(&f);
    
    Queue_DestroyQueue(&f);



    return 0;
}