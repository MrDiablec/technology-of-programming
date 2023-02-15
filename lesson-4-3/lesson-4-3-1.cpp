//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-4-3
/*
Создайте программу, которая сортирует массив от меньшего к большему целочисленному значению.
Массив объявить на максимальное количество элементов = 100. Количество элементов в массиве должно вводиться пользователем с клавиатуры.
*/

#include <stdio.h>

int main(){
    printf("Введите количество элементов массива: ");
    int n=0;
    scanf("%d",&n);
    if (n>0&&n<=100) {
        int a[n]; 
        for (int i = 0; i < n; i++)
        {
            printf("Введите элемент массива %d: ",i);
            scanf("%d",&a[i]);
        }
        int temp;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ",a[i]);
        }
    } else {
        printf("Количество элементов массива должно быть 0<n<=100");
    }
}