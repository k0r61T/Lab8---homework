#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    printf("Домашнее задание по Lab8. Задание 3. Вариант 6\n");
    printf("Вычислите с использованием цикла for значение ряда,\nдля заданных пользователем значений a и n.\na * (a-n) * (a-2n) ... (a-n^2)\n");
    int a, n;
    long long y = 1;
    printf("\nВведите целое значение a:\n");
    scanf("%d", &a);
    printf("Введите целое значение n:\n");
    scanf("%d", &n);

    printf("\nВычисление по формуле a * (a-n) * (a-2n) ... (a-n^2):\n");
    for (int i = 0; i <= n; i++) {
        int x = a - i * n;  
        long long o = y;
        y = y * x;
        printf("%d действие: %lld * %d = %lld\n", i + 1, o, x, y);
    }
    printf("\nОтвет: %lld\n", y);
    return 0;
}
