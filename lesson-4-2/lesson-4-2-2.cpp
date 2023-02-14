//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-4-2
/*
Создать массив, подобный массиву из первого задания, в котором пользователь может вводить количество элементов с клавиатуры.
Числа из массива должны выводиться на экран с интервалом в виде пробела.
*/

#include <stdio.h>

int main(){
    printf("Введите количество элементов массива: ");
    int n=0;
    scanf("%d",&n);
    int a[n]; 
    for (int i = 0; i < n; i++)
    {
        printf("Введите элемент массива %d: ",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}