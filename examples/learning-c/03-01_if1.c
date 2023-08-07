#include <stdio.h>

int main()
{
    int a;

    printf("Type an integer: ");
    scanf("%d", &a);
    if (a > 10)
        printf("Number %d is greater than 10\n", a);

    return(0);
}