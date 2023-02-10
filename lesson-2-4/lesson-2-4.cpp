//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-2-4
/*
Задание №1
Создать программу, выводящую на экран при вводе числа от 1 до 7 день недели, идущий под этим значением.
При вводе числа, не входящего в диапазон 1-7, выводить на экран слово “Error”.
В файле, отправляемом на проверку домашнего задания, комментарием укажите ссылку на репозиторий GitHub, где хранится ваша программа.
*/

#include <stdio.h>

int main(){
    int day;
    printf("Введите число дня недели:");
    if (scanf("%d",&day)==1){
        switch (day)
        {
        case 1:
            printf("Понедельник");
            break;
        case 2:
            printf("Вторник");
            break;
        case 3:
            printf("Среда");
            break;
        case 4:
            printf("Четверг");
            break;
        case 5:
            printf("Пятница");
            break;
        case 6:
            printf("Суббота");
            break;
        case 7:
            printf("Воскресенье");
            break;
        default:
            printf("Error");
            break;
        }
    } else {
        printf("Error");
    }
}