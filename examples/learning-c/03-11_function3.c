#include <stdio.h>

void cheers(void);

int main()
{
    puts("Everyone gets free drinks!");
    cheers();
    puts("Everyone gets free dinner!");
    cheers();
    return(0);
}

void cheers(void)
{
    int x;

    for(x=0;x<3;x++)
        printf("Hooray! ");
    putchar('\n');
}