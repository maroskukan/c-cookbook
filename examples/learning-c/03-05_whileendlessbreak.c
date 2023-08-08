#include <stdio.h>

int main()
{
    int a = 0;

    while(1)
    {
        printf("Here I go for the %d time...!\n",a);
        a++;
        if (a == 11)
            break;
    }
}