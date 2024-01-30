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
    int sum = 0, multiplication = 1, last_number = 0;
    int i = n;
    while (i > 0)
    {
        last_number = i % 10;
        sum += last_number;
        multiplication *= last_number;
        i /= 10;
    }
    return (sum == multiplication);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    is_happy_number(n) ? printf("YES") : printf("NO");
    return 0;
}
