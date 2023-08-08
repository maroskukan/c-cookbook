#include <stdio.h>

int main()
{
    int x;

    x = 20;
    // Prints even numbers from 1 to 10
    while (x >= 0)
    {
        printf("%d\n", x);
        x = x - 2;
    }

    return(0);
}