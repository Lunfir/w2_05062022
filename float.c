#include "stdio.h"

int main()
{
    int a = 42;
    float f = 42.43;
    double d = 42.43;

    printf("int: %d\n", sizeof(int));
    printf("float: %d\n", sizeof(float));
    printf("double: %d\n", sizeof(double));

    printf("float: %.20f\n", f);
    printf("double: %.20g\n", d);

    if (f != d)
    {
        printf("f != g\n");
    }


    return 0;
}
