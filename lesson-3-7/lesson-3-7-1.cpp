//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-3-7
/*
Создать программу, используя цикл for, которая с помощью цикла суммирует числа от 1 до 100.
*/

#include <stdio.h>

int main(){
    int sum=0; 
    for (int i = 1; i <= 100; i++)
    {
        sum+=i;
    }
    printf("Сумма %d\n",sum);
}