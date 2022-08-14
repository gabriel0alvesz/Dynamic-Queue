#include "queue.h"

void Queue_CreateQueue(Queue *f){

    f->first = (QNode*)malloc(sizeof(QNode));
    f->first->prox = NULL;
    f->last = f->first;
    f->size = 0;
    // Fila Criada!ß
}

QNode *Queue_CreateQNode(int val){
    
    QNode *new = (QNode*)malloc(sizeof(QNode));

    new->ant = NULL;
    new->prox = NULL;
    new->val = val;
    //Nó criado!
    return new;
}

bool Queue_isEmpty(Queue *f){

    return f->first == f->last || f->size == 0;

}

void Queue_InsertInQueue(Queue *f, int val){

    QNode *new = Queue_CreateQNode(val);

    // A fila esta vazia?
    if(Queue_isEmpty(f)){

        f->first->prox = new;
        f->last = new;
        f->last->prox = NULL;

    }else{
        
        new->ant = f->last; // o antigo ultimo elemento passa a ser o elemento anterior do novo nó
        f->last->prox = new; // O penultimo elemento agora tera seu ponteiro prox apontando para o ultimo nó
        f->last = new; // o ponteiro de ultimo agora aponta para o novo nó inserido
        f->last->prox = NULL;

    }

    f->size++;

}

//Sempre irá remover o ultimo da lista.
void Queue_RemoveFirstQueue(Queue *f){

    QNode *aux = f->first->prox;

    if(!Queue_isEmpty(f)){
        
        f->first->prox = aux->prox;
        free(aux);
        f->size--;

    }else{

        puts("\n---> Fila Vazia");

    }

}

void Queue_PrintQueue(Queue *f){

    QNode *aux = f->first->prox;

    while(aux != NULL){

        printf("%d ",aux->val);
        aux = aux->prox;
    
    }

    printf("\t[%zu]\n",f->size);

}

void Queue_DestroyQueue(Queue *f){
    
    QNode *p = f->first;
    QNode *aux = NULL;

    while(p != NULL){

        aux = p;
        p = p->prox;
        free(aux);
    
    }

    free(p);
    f = NULL;
    //Fila desalocada.
    printf("\n---> Fila desalocada!\n");
}