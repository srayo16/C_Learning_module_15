#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(char a[])
{
    printf("%s", a);
    // printf("%d\n", strlen(a));
}
void fun2(char *a)
{
    printf("%s", a);
    // printf("%d\n", strlen(a));
}

int main()
{
    char ar[50] = "Hello";
    int sz = sizeof(ar) / sizeof(char);
    printf("%d\n", strlen(ar));

    fun(ar);
    return 0;
}