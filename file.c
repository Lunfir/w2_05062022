#include <stdio.h>

void readNumFromFile(FILE* in)
{
    printf("readNumFromFile(FILE* in)\n");
    int num;

    fscanf(in, "%d", &num);
    printf("num: %d\n", num);
}

void readFile(FILE* in)
{
    printf("readFile(FILE* in)\n");
    for ( int num; fscanf(in, "%d", &num) == 1; )
    {
        printf("num: %d\n", num);
    }
}

void readNumsFromFile(FILE* in, int limit)
{
    printf("readNumsFromFile(FILE* in, int limit)\n");
    for ( int index = 0, num; index < limit && fscanf(in, "%d", &num) != EOF; index++)
    {
        printf("num: %d\n", num);
    }
}

int main()
{
    // file
    FILE* in = fopen("task.in", "r");
    FILE* out = fopen("task.out", "w");
    // fprintf(out, "%d", num);

    readNumFromFile(in);
    // reset cursor
    fclose(in);
    in = fopen("task.in", "r");

    readNumsFromFile(in, 5);
    fclose(in);
    in = fopen("task.in", "r");

    readFile(in);

    fclose(in);
    fclose(out);

    return 0;
}
