#include "Node.h"
#include "LeArquivo.h"

#include <stdio.h>

//sudo apt install libncurses5-dev
//instalar essa dependencia

int main(){

    struct Queue *lista = init();

    // struct Node *victor = newNode("victor", "m", "50000");
    // struct Node *vivian = newNode("vivian", "f", "50000");
    // struct Node *lanche = newNode("lanche", "m", "10");
    // struct Node *chaticia = newNode("chaticia", "f", "80");
    // struct Node *meninas = newNode("meninas", "f", "20");
    // struct Node *pequena = newNode("pequena", "f", "15");
    //
    // push(victor, lista);
    // push(vivian, lista);
    // push(chaticia, lista);
    // push(meninas, lista);
    // push(lanche, lista);
    // push(pequena, lista);
    //
    // printList(lista);

    printf("-----------\n");

    retornaLinha(lista);

    walkList(lista);

    int temp = 0;

    scanf("%d", &temp);

    return 0;
}
