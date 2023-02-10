//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-3-5
/*
Составьте программу, выводящую на экран сумму чисел от 5 до 15 включительно, используя цикл.
*/

#include <stdio.h>

int main(){
    int sum=0; 
    for (int i = 5; i <= 15; i++)
    {
        sum+=i;
    }
    printf("Сумма %d\n",sum);
}