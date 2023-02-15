//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-5-3
/*
Создать двумерный массив, в котором количество строк и столбцов вводит пользователь с клавиатуры, а содержимое массива вводится с помощью генератора псевдослучайных чисел.
Диапазон генератора псевдослучайных чисел ограничить с -2 до 7.
*/

#include <stdio.h>
#include <cstdlib>

int main(){
    int n=0,m=0; 
    printf("Введите количество строк массива: ");
    scanf("%d",&n);
    printf("Введите количество столбцов массива: ");
    scanf("%d",&m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j]= -2 + (rand() % 10);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}