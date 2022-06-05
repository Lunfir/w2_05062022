#include <stdio.h>

// Считать с клавиатуры целое неотрицательное число.
// Вывести в строку убывающий ряд чисел от заданного до нуля.

#ifndef NUM
#define NUM 10
#endif

void bar(int n);

void foo(int n)
{
    if ( n < 0 )
    {
        return;
    }

    printf("%d\n", n);
    bar(n - 1);
}

void bar(int n)
{
    if ( n < 0 )
    {
        return;
    }

    printf("%d\n", n);
    foo(n - 1);
}

void countdown(int n)
{
    if ( n < 0 )
    {
        return;
    }

    printf("%d\n", n);
    countdown(n - 1);
}

int main()
{
    foo(NUM);

    return 0;
}