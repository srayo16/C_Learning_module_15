#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double x = 52.26;
    double *ptr = &x;
    printf("x er value: %0.2lf\n", x);
    printf("x er value: %0.2lf\n", *ptr);
    printf("x er address: %p\n", ptr);

    return 0;
}