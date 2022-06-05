#include <stdio.h>


#ifndef NUM
#define NUM 10
#endif


int fiboR(int n)
{
    if ( n == 0 )
    {
        return 0;
    }

    if ( n == 1 )
    {
        return 1;
    }

    return fiboR(n - 1) + fiboR(n - 2);
}

int fiboL(int n)
{
    int result = 0;

    if ( n == 0)
    {
        return 0;
    }

    if ( n == 1)
    {
        return 1;
    }

    for (int index = 2, zero = 0, first = 1; index <= n; index++)
    {
        result = zero + first;
        zero = first;
        first = result;
    }

    return result;
}

int main()
{
    printf("fiboR : %d\tn: %d\n", fiboR(NUM), NUM);
    printf("fiboL : %d\tn: %d\n", fiboL(NUM), NUM);

    return 0;
}