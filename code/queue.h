#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct QueueNode{
    
    int val;
    struct QueueNode *prox, *ant;

}QNode;

typedef struct TypeQueue{

    size_t size;
    QNode *first, *last;

}Queue;


/**
 * @brief Cria a Fila.
 * 
 * @param f Endereço da Fila(&f)
 */
void Queue_CreateQueue(Queue *f);

/**
 * @brief Cria um nó.
 * 
 * @param val Valor.
 * @return Retorna o endereço do nó criado.
 */
QNode *Queue_CreateQNode(int val);

/**
 * @brief Verifica se a fila está vazia.
 * 
 * @param f Endereço da Fila(&f)
 * @return true = A Fila está vazia.
 * @return false = A Fila não está vazia.
 */
bool Queue_isEmpty(Queue *f);

/**
 * @brief Enfileira.
 * 
 * @param f Endereço da Fila(&f).
 * @param val Valor.
 */
void Queue_InsertInQueue(Queue *f, int val);

/**
 * @brief Desenfileira(Sempre o primeiro da fila).
 * 
 * @param f Endereço da Fila(&f).
 */
void Queue_RemoveFirstQueue(Queue *f);

/**
 * @brief Imprime a Fila.
 * 
 * @param f Endereço da Fila(&f).
 */
void Queue_PrintQueue(Queue *f);

/**
 * @brief Imprime o primeiro elementoda fila.
 * 
 * @param f Endereço da Fila(&f);
 * @return Retorna o primeiro valor da fila.
 */
int Queue_FirstInQueue(Queue *f);

/**
 * @brief Desaloca a Fila.
 * 
 * @param f Endereço da Fila(&f).
 */
void Queue_DestroyQueue(Queue *f);


#endif