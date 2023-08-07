#include <stdio.h>

int main()
{
    int c;

    printf("Enter a character: ");
    c = getchar();
    printf("Your character was %c\n", c);
    putchar(c);

    return(0);
}