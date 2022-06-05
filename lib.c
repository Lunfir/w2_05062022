#include <stdio.h>
#include "lib.h"

void fillArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
}

void printArray(int arr[], int size)
{
    int limit = size - 1;

    for (int i = 0; i < limit; i++)
    {
        printf("%d_", arr[i]);
    }
    printf("%d\n", arr[limit]);
}

void fillArrayPointer(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = 42;
    }
}

void printArrayPointer(int arr[], int size)
{
    int limit = size - 1;

    for (int i = 0; i < limit; i++)
    {
        printf("%d_", *(arr + i));
    }
    printf("%d\n", *(arr + limit));
}

void fillStr(char str[], int limit)
{
    int start = 65; // 'A'

    for (int i = 0; i < limit; i++)
    {
        str[i] = start + i;
    }

    str[limit] = '\0';
}

void fillStrFromFile(FILE* in, char str[])
{
    fscanf(in, "%s", str);
}

void fillStrFromFileFixed(FILE* in, char str[], int limit)
{
    int i = 0;

    for ( ; i < limit && fscanf(in, "%c", &str[i]) == 1; i++);

    str[i] = '\0';
}

int strLen(char str[])
{
    int len = 0;

    for ( ; str[len] != '\0'; len++ );

    return len;
}

void printStr(char str[])
{
    for ( int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
}