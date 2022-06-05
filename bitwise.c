#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifndef LIMIT
#define LIMIT 2000000
#endif

int main()
{
    FILE* file = fopen("task.in", "w");

    srand(time(NULL));
    for (int i = 0; i < LIMIT; i++)
    {
        int num = rand();

        if (num < 0)
        {
            num *= -1;
        }
        
        char c = (num % 40) + 40;

        fprintf(file, "%c", c);
    }

    // fprintf(file, "%c", '\0');

    return 0;
}

// bitwise
