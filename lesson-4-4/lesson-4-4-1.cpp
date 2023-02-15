//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-4-4
/*
Создайте программу, которая из n введенных чисел находит через массив:
минимальное и максимальное значения
сумму всех элементов
среднее арифметическое
Все найденные значения вывести на экран.
*/

#include <stdio.h>

int main(){
    int n=0; 
    int sum=0,max=0,min=0;
    printf("Введите количество элементов массива: ");
    scanf("%d",&n);
    if (n>0) {
        int a[n];
        for (int i = 0; i < n; i++)
        {
            printf("Введите элемент массива %d: ",i);
            scanf("%d",&a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            sum+=a[i];
            max=(a[i]>max||i==0)?a[i]:max;
            min=(a[i]<min||i==0)?a[i]:min;
        }
        printf("Минимальное: %d\n",min);
        printf("Максимальное: %d\n",max);
        printf("Сумма: %d\n",sum);
        printf("Среднее арифмитическое: %f\n",(float)sum/n);
    } else {
        printf("Количество элементов массива должно быть 0<n");
    }
}