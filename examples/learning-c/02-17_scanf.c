#include <stdio.h>

int main()
{
    char name[15]; /* Room for 14 characters */

    printf("What is your name? ");
    scanf("%s", name);
    printf("Pleased to meet you, %s.\n", name);
    return(0);
}