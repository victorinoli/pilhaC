//
// Created by victo on 17/02/2025.
//

#include "pegaSeta.h"

#include <stdio.h>

#ifdef _WIN32
#include <conio.h>  // Para _getch() no Windows
#else
#include <ncurses.h>  // Para captura de teclas no Linux
#endif

int detectArrowKeys() {

#ifdef _WIN32
    printf("Pressione as setas para testar.\n");

    while (1) {
        int ch = _getch();  // Captura a primeira tecla

        if (ch == 224) { // Código especial (setas no Windows)
            ch = _getch();  // Pega o segundo código

            switch (ch) {
                case 72:  // CIMA
                    return 0;
                case 80:  // BAIXO
                    return 1;
                case 75:  // ESQUERDA
                    return 1;
                case 77:  // DIREITA
                    return 0;
                default:
                    printf("Outra tecla: %d\nPor favor, digite apenas as setas.\n", ch);
                    int a = detectArrowKeys();
                    return a;

            }
        }
    }
#else
    initscr();             // Inicializa ncurses
    noecho();              // Não imprime teclas pressionadas
    cbreak();              // Desativa buffering de linha
    keypad(stdscr, TRUE);  // Ativa captura de teclas especiais

    printw("Pressione as setas para testar.\n");
    refresh();

    while (1) {
        int ch = getch();  // Captura a tecla


        switch (ch) {
            case KEY_UP:
                refresh();
                endwin();
                return 0;
            case KEY_DOWN:
                refresh();
                endwin();
                return 1;
            case KEY_LEFT:
                refresh();
                endwin();
                return 1;
            case KEY_RIGHT:
                refresh();
                endwin();
                return 0;
            default:
                printw("Outra tecla: %d\nPor favor, digite apenas as setas.\n", ch);
                refresh();
                int a = detectArrowKeys();
                return a;

        }
    }

    endwin();  // Finaliza ncurses corretamente (caso necessário)
    return j;
#endif
}
