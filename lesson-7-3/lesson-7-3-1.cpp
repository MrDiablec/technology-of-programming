//https://github.com/MrDiablec/technology-of-programming/tree/main/lesson-7-3
/*
Разработать функцию, определяющую, является ли натуральное число квадратом какого-либо другого целого числа. (Не использовать стандартную функцию вычисления корня.)
Ввести три натуральных числа. Используя разработанную функцию определить сколько из них являются квадратами любых других натуральных чисел.
При этом разработанная функция должна быть реализована 3 способами:
- как функция, возвращающая искомое значение;
- как функция, возвращающая искомое значение через дополнительный аргумент - указатель;
- как функция, возвращающая искомое значение через дополнительный аргумент - ссылку.
Эти три функции должны иметь одно и то же имя, т.е. должны быть перегружены.
*/

#include <stdio.h>

bool isSquare(int n) {
    for (int i = 1; i * i <= n; i++) {
        if (i * i == n) {
            return true;
        }
    }
    return false;
}

void isSquare(int n, bool *result) {
    for (int i = 1; i * i <= n; i++) {
        if (i * i == n) {
            *result = true;
            return;
        }
    }
    *result = false;
}

void isSquare(int n, bool &result) {
    for (int i = 1; i * i <= n; i++) {
        if (i * i == n) {
            result = true;
            return;
        }
    }
    result = false;
}

int main() {
    int n1, n2, n3;
    printf("Введите 3 натуральных числа: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    int count = 0;
    if (isSquare(n1)) {
        count++;
    }
    bool result;
    isSquare(n2, &result);
    if (result) {
            count++;
    }
    isSquare(n3, result);
    if (result) {
            count++;
    }
    printf("Количество чисел являющихся квадратом: %d\n", count);
}