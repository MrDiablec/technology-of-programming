//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-6-3
/*
Задание №1
Создайте одномерный массив символов, впишите туда с клавиатуры данные и выведите на экран только 2-й символ данного слова.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char n[100]; 
    printf("Введите cтроку: ");
    scanf("%s",n);
    if (strlen(n)>1){ 
        printf("Второй символ: %c \n",n[1]);
    } else {
        printf("Строка меньше двух символов");
    }
}