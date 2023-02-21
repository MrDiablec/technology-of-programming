//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-7-2
/*
Объявить два целочисленных массива с разными размерами и написать функцию, которая заполняет их элементы значениями и выводит на экран.
Функция должна принимать два параметра – массив и его размер.
*/

#include <stdio.h>
#include <cstdlib>

void randArray(int* arr,int size){
    for (int i = 0; i < size; i++)
    {
        arr[i]= 0 + (rand() % 10);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[10];
    int arr2[20];
    randArray(arr,10);
    randArray(arr2,20);
}