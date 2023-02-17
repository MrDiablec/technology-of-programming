//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-6-3
/*
Задание №2
Создайте одномерный массив, далее заполните его данными, например словом «Hello», после чего пропишите код так, чтобы он определил последний элемент строки.
После измените код так, чтобы программа меняла два элемента строки местами.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char n[100]="prejudice"; 
    printf("Последний символ: %c\n",n[strlen(n)-1]);
    char temp=n[0];
    n[0]=n[strlen(n)-1];
    n[strlen(n)-1]=temp;
    printf("Измененная строка: %s\n",n);
}