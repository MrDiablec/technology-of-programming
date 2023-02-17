//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-6-3
/*
Задание №3
Создайте одномерный массив, и заполните его данными, например словом «Hello».
После чего пропишите код так, чтобы он удалял нужный пользователю символ из строки.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char n[100]="prejudice"; 
    printf("Введите номер символа который нужно удалить в слове '%s': ",n);
    int i;
    scanf("%d",&i);
    i-=1;
    if (i>=0&&i<=strlen(n)-1){
        for (int j=i; j < strlen(n); j++){
            n[j]=n[j+1];
        }
        printf("Измененная строка '%s'\n",n);
    } else {
        printf("Символа с таким номером не существует");
    }
    
}