/*  Домашнее задание №5.
Задача 3. Сумма цифр равна произведению
Составить логическую функцию, которая определяет, верно ли, что в заданном
числе сумма цифр равна произведению.

int is_happy_number(int n)

Данные на входе: Целое не отрицательное число
Данные на выходе: YES или NO

Пример №1                             Пример №2
Данные на входе:    123               Данные на входе:  528
Данные на выходе:   YES               Данные на выходе: NO
*/

#include <stdio.h>

int is_happy_number(int n)
{
    int Number_counter = 0, sum, multiplication;
    for (int i = n; i > 0; i /= 10) Number_counter++;
    
    return Number_counter;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", is_happy_number(n));
    return 0;
}
