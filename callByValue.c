#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int x)
{

    x = 20;
    printf("x address is: %p\n", &x);
    printf("x value is: %d\n", x);
}

int main()
{
    int x = 10;
    fun(x);
    printf("x origin address is: %p\n", &x);
    printf("x origin value is: %d\n", x);
    return 0;
}