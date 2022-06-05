#include <stdio.h>

// Вычислить и вывести факториал считанного с клавиатуры целого числа. 
// Гарантируется, что вводимое число не превышает 10.

// В случае неопределенности ответа вывести -1.
// Для решения пользоваться циклами.

#ifndef NUM
#define NUM 10
#endif

int factorialR(int n)
{
    if (n < 0)
    {
        return -1;
    }

    if (n == 1)
    {
        return 1;
    }

    return n * factorialR(n - 1);
}

int factorialL(int n)
{
    int result = 1;
    
    if ( n < 0 ) {
        return -1;
    }
    
    for ( int i = 1; i <= n; i++ ) {
        result *= i;
    }
    
    return result;
}

int main() {

    // printf("loop: %d\n", factorialL(NUM));
    printf("rec : %d\n", factorialR(NUM));

    
    return 0;
}
