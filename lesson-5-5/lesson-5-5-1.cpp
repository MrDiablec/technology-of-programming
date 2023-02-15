//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-5-5
/*
Создать двумерный массив, в котором количество строк, столбцов, а также содержимое массива вводит пользователь с клавиатуры.
Выполнить инверсию двумерного массива (матрицы) по главной диагонали.
Пример работы программы:
Ввод:
1 2 3
4 5 6
7 8 9
Вывод:
1 4 7
2 5 8
3 6 9
*/

#include <stdio.h>

int main(){
    int n=0,m=0,temp; 
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
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