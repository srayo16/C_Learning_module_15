#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int *ptr = &x;
    *ptr = 20;

    // x = 20 or *ptr =20 are same;

    printf("%p\n", ptr);
    printf("%p\n", &x);
    printf("%d\n", *ptr);
    printf("%p\n", &ptr);
    return 0;
}