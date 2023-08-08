#include <stdio.h>

int main()
{
    int x;
    int y;
    y = -10;

    // Print numbers from 1 to 20
    for(x = 0;x < 20; x++)
    {
        printf("%d\n",x+1);
    }
    // Print numbers from -10 to 10
    while(y<=10)
    {
        printf("%d\n",y);
        y = y + 2;
    }
    return(0);
}