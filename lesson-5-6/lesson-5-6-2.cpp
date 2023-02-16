//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-5-6
/*
В массиве n x m элементов поменять местами первый и последний столбец. Вывести полученный результат.
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
            temp=arr[i][0];
            arr[i][0]=arr[i][m-1];
            arr[i][m-1]=temp; 
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