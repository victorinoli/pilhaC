//
// Created by victo on 13/02/2025.
//

#include "Node.h"
#include "pegaSeta.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node *newNode(const char *nome, const char *sexo, double salario) {

    struct Node *n = malloc(sizeof(struct Node));
    if (!n) {
        printf("Erro ao alocar memória!\n");
        return NULL;
    }
    strncpy(n->nome, nome, sizeof(n->nome) - 1);
    n->nome[sizeof(n->nome) - 1] = '\0'; // Garante que a string seja terminada corretamente
    strncpy(n->sexo, sexo, sizeof(n->sexo) - 1);
    n->sexo[sizeof(n->sexo) - 1] = '\0';
    n->salario = salario;
    n->next = NULL;
    return n;
}

struct Queue *init() {

    struct Queue *q = malloc(sizeof(struct Queue));

    if (q == NULL) {
        printf("Erro ao alocar memoria\n");
        exit(1);
    }

    q->front = NULL;
    q->rear = NULL;

    return q;
}

void push(struct Node *n, struct Queue *q) {

    n->next = NULL;
    n->prev = NULL;

    if (q->rear == NULL) {
        q->front = n;
        q->rear = n;
    }else {
        n->prev = q->rear;
        q->rear->next = n;
        q->rear = n;
    }
}

struct Node *pop(struct Queue *q) {

    if (q->front == NULL) {
        printf("sem mais elementos");
        exit(1);
    }

    struct Node *temp = q->rear;

    q->rear = q->rear->prev;

    return temp;
}

void printList(const struct Queue *q) {

    struct Node *temp = q->front;

    if (temp == NULL) {

        printf("Lista vazia");

        return;
    }

    while(temp != NULL){

        printf("%s\n", temp->nome);
        printf("%s\n", temp->sexo);
        printf("%.2f\n", temp->salario);

        temp = temp->next;
    }
}

void walkList(const struct Queue *q) {

    struct Node *temp = q->front;

    if (temp == NULL) {

        printf("Lista vazia");
        return;
    }

    while(temp != NULL) {

        printf("-----------------------------------------------------------------\n");
        printf("Nome: %s\n", temp->nome);
        printf("Sexo: %s\n", temp->sexo);
        printf("Salario: %.2f\n", temp->salario);

        int i = 0;

        //1 volta 0 vai
        //scanf("%d", &i);// substituir por função que pega setas
        i = detectArrowKeys();

        if (i == 0) {
            temp = temp->next;
        }
        if (i == 1) {
            temp = temp->prev;
        }

    }
}

void ordenaArray(struct Queue *q) {

    struct Node *temp = q->front;

    if (temp == NULL) {
        printf("Lista vazia");
    }else {

    }
}

