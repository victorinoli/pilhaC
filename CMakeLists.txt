cmake_minimum_required(VERSION 3.30)
project(pilha0_1 C)

set(CMAKE_C_STANDARD 99)

add_executable(pilha0_1 main.c
        Node.h
        Node.c
        quicksort.c
        quicksort.h
        pegaSeta.c
        pegaSeta.h
        LeArquivo.c
        LeArquivo.h)
