#include <stdio.h>

int main()
{
    int a;

    printf("Type an integer: ");
    scanf("%d", &a);
    printf("You typed %d.\n",a);
    printf("%d is ",a);
    if (a > 10)
        printf("greater than");
    else if(a < 10)
        printf("less than");
    else
        printf("equal to");
    printf(" 10.\n");

    return(0);
}