#include <stdio.h>
#include <math.h>

typedef struct 
{
    double x;
    double y;
} Point;

void pointPrint(Point a)
{
    printf("(%g, %g)", a.x, a.y);
}

int pointEqual(Point a, Point b) // 0 1
{
    return a.x == b.x && a.y == b.y;
}

double pointDistance(Point a, Point b)
{
    return hypot(a.x - b.x, a.y - b.y);
}

int main()
{
    Point pointA, pointB;

    pointA.x = 45.12;
    pointA.y = 4.12;

    pointB.x = 2.12;
    pointB.y = 4.12;
    
    if (pointEqual(pointA, pointB))
    {
        pointPrint(pointA);
        printf(" is Equal to ");
        pointPrint(pointB);
        printf("\n");
    } else
    {
        pointPrint(pointA);
        printf(" is not Equal to ");
        pointPrint(pointB);
        printf("\n");
    }

    printf("distance: %g\n", pointDistance(pointA, pointB));    

    return 0;
}
