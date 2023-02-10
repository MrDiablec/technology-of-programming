//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-2-6
/*
Написать программу, вычисляющую на основе дня, месяца, года рождения (целые числа, вводятся с клавиатуры) следующую информацию:
Год рождения: високосный или нет
Год по восточному календарю (12 символов года, которые каждые 12 лет повторяются)
Знак зодиака (учитывая что знак находится после 21 числа каждого месяца и до 20 числа)
В файле, отправляемом на проверку домашнего задания, комментарием укажите ссылку на репозиторий GitHub, где хранится ваша программа.
*/

#include <stdio.h>

void leap_year(int year){
    printf((year%400==0)||((year%4==0)&&(year%100!=0))?"Високосный год рождения\n":"Не високосный год рождения\n");
}

void east_year(int year){
    char * ret;
    switch((year%100)%12)
    {
        case 0:
        ret = (char *)"крысы";break;
        case 1:
        ret = (char *)"быка";break;
        case 2:
        ret = (char *)"тигра";break;
        case 3:
        ret = (char *)"кролика";break;
        case 4:
        ret = (char *)"дракона";break;
        case 5:
        ret = (char *)"змеи";break;
        case 6:
        ret = (char *)"лошади";break;
        case 7:
        ret = (char *)"козы";break;
        case 8:
        ret = (char *)"обезьяны";break;
        case 9:
        ret = (char *)"петуха";break;
        case 10:
        ret = (char *)"собаки";break;
        case 11:
        ret = (char *)"свиньи";break;
    }
    printf("Вы родились в год %s по восточному календарю\n",ret);
}

void zodiac(int day, int month){
    char * ret;
    int zodiac=100*month+day;
    if(zodiac>=121 && zodiac<=220)   ret = (char *)"водолей" ;
    if(zodiac>=221 && zodiac<=320)   ret = (char *)"рыбы";
    if(zodiac>=321 && zodiac<=420)   ret = (char *)"овен";
    if(zodiac>=421 && zodiac<=520)   ret = (char *)"телец";
    if(zodiac>=521 && zodiac<=620)   ret = (char *)"близнецы";
    if(zodiac>=621 && zodiac<=720)   ret = (char *)"рак";
    if(zodiac>=721 && zodiac<=820)   ret = (char *)"лев";
    if(zodiac>=821 && zodiac<=920)   ret = (char *)"дева";
    if(zodiac>=921 && zodiac<=1020)  ret = (char *)"весы";
    if(zodiac>=1021 && zodiac<=1120) ret = (char *)"скорпион";
    if(zodiac>=1121 && zodiac<=1220) ret = (char *)"стрелец";
    if(zodiac>=1221 || zodiac<=120)  ret = (char *)"козерог";
    printf("По знаку зодиака Вы %s\n",ret);
}

int main(){
    int day,month,year=0;
    printf("Введите дату рождения в формате день/месяц/год:");
    if (scanf("%d/%d/%d",&day,&month,&year)==3){
        if (day>0&&day<=31&&month>0&&month<=12&&year>0){
            leap_year(year);
            east_year(year);
            zodiac(day,month);
        } else {
            printf("Неверный формат даты");
        }
    } else {
        printf("Неверный формат даты");
    }
}