//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-7-4
/*
Задание №1
Создать функцию, получающую на вход строку и символ, и возвращающую строку с измененной первой и последней буквой на входной символ.
Задание №2
Создать функцию, получающую на вход строку и возвращающую строку с удалением начальных и конечных пробелов.
*/

#include <stdio.h>
#include <string.h>

char* changeFirstAndLastChar(char str[], char c) {
    int len = strlen(str);
    if(len > 1) {
        str[0] = c;
        str[len - 1] = c;
    }
    return str;
}

char* removeSpaces(char str[]) {
    int len = strlen(str);
    int i = 0, j = len - 1;
    while(str[i] == ' ') i++;
    while(str[j] == ' ') j--;
    for(int k = i; k <= j; k++) {
        str[k - i] = str[k];
    }
    str[j - i + 1] = '\0';
    return str;
}

int main() {
    char str[100], sim;
    printf("Введените строку: ");
    scanf("%s", str);
    printf("Введите символ, на который заменить первый и последный символ: ");
    scanf(" %c", &sim);
    printf("Измененная строка по заданию 1: %s\n", changeFirstAndLastChar(str, sim));
    printf("Введите строку с пробелами: ");
    scanf(" %[^\n]s", str);
    printf("Измененная строка по заданию 2: %s\n", removeSpaces(str));
    return 0;
}