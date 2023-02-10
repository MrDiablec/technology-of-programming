//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-3-5
/*
Создать программу, которая выводит числа от 0, увеличивая число с каждым циклом на 1, с 15 итерациями цикла.
Затем вывести на экран только нечетные числа.
*/

#include <stdio.h>

int main(){
    for (int i = 0; i < 15; i++)
    {
        printf("%d\n",i);
    }
    printf("Только нечетные\n");
    for (int i = 0; i < 15; i++)
    {
        if (i%2>0) printf("%d\n",i);
    }
}