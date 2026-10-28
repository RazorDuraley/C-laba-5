#include <stdio.h>

#define SIZE 8

int main(void)
{
    /*
    int Nзкс = 111260309;
    int K = 0;
    int Вариант = ((Nзкс + (K + 18)) % 30) + 1;   // = 18
    */

    double arr[SIZE];
    int i;
    
    arr[0] = 0.0;
    arr[1] = 1.0;
    for (i = 2; i < SIZE; i++)
    {
        arr[i] = 2.0 * arr[i-1] + arr[i-2];
    }

    printf("Source: ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    double max = arr[0];
    for (i = 1; i < SIZE; i++)
    {
        if (arr[i] > max) max = arr[i];
    }

    printf("Max: %.2f\n", max);

    return 0;
}

/* Индексация начинается с нуля, потому что arr[i] в языке C — это
   синтаксический сахар для *(arr + i). Если arr указывает на начало
   блока памяти, то нулевое смещение (i=0) соответствует первому элементу.
   Это исторически сложилось из-за арифметики указателей: адрес элемента
   вычисляется как базовый адрес плюс i * sizeof(тип). */