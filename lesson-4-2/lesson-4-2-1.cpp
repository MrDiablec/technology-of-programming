//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-4-2
/*
Создайте массив, состоящий из 7 ячеек, хранящий целочисленные значения. Вывод массива должен производиться по индексу (по порядку).
 Ввод и вывод элементов массива реализовать через конструкцию For.
*/

#include <stdio.h>

int main(){
    int a[7]; 
    for (int i = 0; i < 7; i++)
    {
        printf("Введите элемент массива %d: ",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        printf("Элемент массива %d = %d\n",i,a[i]);
    }
}