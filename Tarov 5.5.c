#include <stdio.h>
#include <math.h>

double calc(double a, double b)
{
    return sqrt(fabs(a - b));
}

int main(void)
{
    /*
    int Nзкс = 111260309;
    int K = 0;
    int Вариант = ((Nзкс + (K + 22)) % 30) + 1;   // = 22
    */

    double a, b;
    printf("Enter a and b (Ctrl+D to exit):\n");

    while (scanf("%lf %lf", &a, &b) == 2)
    {
        printf("%.4f\n", calc(a, b));
    }

    return 0;
}

/* Функция возвращает double, а не float, потому что double (64 бита)
   обеспечивает более высокую точность (около 15-17 значащих цифр)
   по сравнению с float (32 бита, около 7 цифр). Для инженерных расчетов
   стандартом де-факто является double. 
   Ключевое слово return вычисляет выражение, кладет результат в
   специальный регистр процессора и передает управление обратно в
   точку вызова main(), где результат подставляется вместо вызова calc(). */