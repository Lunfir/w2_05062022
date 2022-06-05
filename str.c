#include <stdio.h>
#include "lib.h"

#define SIZE 20

int main()
{
    char str[SIZE];
    // char str[] = {'h','e','l','l','o', '\0'};
    FILE* in = fopen("task.in", "r");

    fillStr(str, SIZE - 1);
    printf("%s\n", str);

    printf("str len: %d\n", strLen(str));

    fillStrFromFile(in, str);
    fclose(in);
    printf("%s\n", str);

    in = fopen("task.in", "r");
    fillStrFromFileFixed(in, str, SIZE - 1);
    printf("%s\n", str);

    printStr(str);

    // scanf("%s", str);
    // printf("%s\n", str);

    fclose(in);

    return 0;
}

// void strCopy(char target[], char source[])
// Гарантируется, что строка target не короче строки source.