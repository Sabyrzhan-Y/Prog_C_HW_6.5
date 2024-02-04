/*  Домашнее задание №5.
Задача 1. Сколько зерен на доске?
Необходимо составить функцию, которая определяет, сколько зерен попросил
положить на N-ую клетку изобретатель шахмат (на 1-ую – 1 зерно, на 2-ую – 2
зерна, на 3-ю – 4 зерна, …)

Данные на входе: Целое число от 1 до 64
Данные на выходе: Одно целое число. Количество зерен на данной
клетке.

Пример №1                       Пример №2
Данные на входе: 3              Данные на входе: 28
Данные на выходе: 4             Данные на выходе: 134217728
*/

#include <stdio.h>

unsigned long long number_of_grains(int a)
{
    unsigned long long grains = 1;
        for(int i = 1;i != a;i++)grains *= 2;
    return grains;
}

int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%llu\n", number_of_grains(a));
 
    return 0;
}
