#include <stdio.h>

#ifndef LIMIT
#define LIMIT 2000000
#endif

void bar(FILE* in, FILE* out, int limit)
{
    printf("Without bufferization\n");
    char str[limit];

    for ( int i = 0; i < limit && fscanf(in, "%c", &str[i]) != EOF; i++);

    for (int i = 0; i < limit; i++)
    {
        fprintf(out, "%c", str[i]);
    }
}

void foo(FILE* in, FILE* out, int limit)
{
    printf("With bufferization\n");
    char str[limit + 1];

    fscanf(in, "%s", str);
    fprintf(out, "%s", str);
}

int main()
{
    FILE* in = fopen("task.in", "r");
    FILE* out = fopen("task.out", "w");

    // bar(in, out, LIMIT);
    foo(in, out, LIMIT);

    fclose(in);
    fclose(out);

    return 0;
}