//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-5-2
/*
Создать двумерный массив, в котором количество строк, столбцов, а также содержимое массива вводит пользователь с клавиатуры.
*/

#include <stdio.h>

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
            printf("Введите элемент [%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}