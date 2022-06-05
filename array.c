#include <stdio.h>
#include "lib.h"

//  gcc -DSIZE=7 array.c && ./a.exe
#ifndef SIZE // if not defined
#define SIZE 5
#endif

int main()
{
    int array[SIZE];
    // int array[] = { 23, 34, 12 };

    printf("sizeof(array): %d\n", sizeof(array));

    fillArray(array, SIZE);
    printArray(array, SIZE);

    fillArrayPointer(array, SIZE);
    printArrayPointer(array, SIZE);

    return 0;
}
