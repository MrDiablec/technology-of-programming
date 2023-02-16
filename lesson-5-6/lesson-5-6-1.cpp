//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-5-6
/*
Отсортировать массив из n x m элементов построчно: каждая строка от минимального к максимальному элементу по значению. 
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
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < m - 1; i++) {
            for (int j = 0; j < m - i - 1; j++) {
                if (arr[k][j] > arr[k][j + 1]) {
                    temp = arr[k][j];
                    arr[k][j] = arr[k][j + 1];
                    arr[k][j + 1] = temp;
                }
            }
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