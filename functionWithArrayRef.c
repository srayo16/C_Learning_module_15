#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int *ar, int n)
{
    *(ar + 2) = 100; // important pointer game bro!

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ar + i));
    }
    printf("\n");
}

void fun2(char *ar)
{
    ar[0] = 'G';
}

int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
    fun(ar, 5); // 0th index = ar;

    char arr[10] = "Hello";
    fun2(arr);
    printf("%s", arr);

    return 0;
}