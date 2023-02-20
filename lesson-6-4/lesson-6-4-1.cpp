//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-6-4
/*
Задание №1
Создать одномерный массив символов, вписать с клавиатуры данные, затем прописать код так, чтобы программа удаляла первую букву.
Задание №2
Создать зеркальное отображение строки с использованием второй (буферной) строки.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char n[100],mirrow[100]; 
    printf("Введите строку: ");
    scanf("%s",n);
    int k=0;
    for (int i=strlen(n)-1;i>=0;i--){
        mirrow[k]=n[i];
        k+=1;
    }
    for (int j=0; j < strlen(n); j++){
        n[j]=n[j+1];
    }
    printf("Измененная строка '%s'\n",n);    
    printf("Зеркальная строка '%s'\n",mirrow);  
}