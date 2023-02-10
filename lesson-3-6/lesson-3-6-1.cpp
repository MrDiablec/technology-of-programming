//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-3-6
/*
Создать программу, которая с помощью цикла выводит таблицу умножения на 5 от 1 до 10.
*/

#include <stdio.h>

int main(){
    for (int i = 1; i <= 10; i++)
    {
        printf("5x%d=%d\n",i,i*5);
    }
}