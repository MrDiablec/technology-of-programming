//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-3-6
/*
Составьте программу, которая завершает свою работу при вводе определенной цифры (Например, 7). При вводе других цифр продолжает цикл и выводит на экран информацию:
больше или меньше это число 7-ми.
больше или меньше 10
делится ли число на 2
делится ли на 3
*/

#include <stdio.h>

int main(){
    int t;
    while (scanf("%d",&t)&&t!=7){
        printf((t>7)?"Число больше 7\n":"Число меньше 7\n");
        printf((t>10)?"Число больше 10\n":(t<10)?"Число меньше 10\n":"Число равно 10\n");
        printf((t%2==0)?"Число делится на 2\n":"Число не делится на 2\n");
        printf((t%3==0)?"Число делится на 3\n":"Число не делится на 3\n");
    }
}