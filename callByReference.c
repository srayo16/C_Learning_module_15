#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int *ptr)
{
    *ptr = 50;
}

int main()
{
    int x = 10;
    printf("%d\n", x);
    fun(&x);
    printf("%d\n", x);

    return 0;
}