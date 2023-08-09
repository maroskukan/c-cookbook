#include <stdio.h>

int max(int x, int y);
void isLarger(int big);

int main()
{
    int a,b;

    printf("Type the first integer number: ");
    scanf("%d",&a);
    printf("Type the second integer number: ");
    scanf("%d",&b);
    isLarger(max(a,b));

    return(0);
}

int max(int x, int y)
{
    if(x > y)
        return(x);
    return(y);
}

void isLarger(int big)
{
    printf("The larger value is %d\n",big);
}
