//
// Created by victo on 13/02/2025.
//

#ifndef NODE_H
#define NODE_H

struct Node {

    char nome[100];
    char sexo[2];
    double salario;
    struct Node *next;
    struct Node *prev;

};

struct Queue {

    struct Node *front;
    struct Node *rear;

};


struct Node *newNode(const char *nome, const char *sexo, double salario);

struct Queue *init();

void push(struct Node *n, struct Queue *q);

struct Node *pop(struct Queue *q);

void printList(const struct Queue *q);

void walkList(const struct Queue *q);

#endif //NODE_H
