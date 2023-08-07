#include <stdio.h>
#include <math.h>

int main()
{
    float a,b;

    printf("Enter a value for a: ");
    scanf("%f", &a);
    printf("Enter a value for b: ");
    scanf("%f", &b);

    printf("%f + %f = %f\n",a,b, a + b);
    printf("%f - %f = %f\n",a,b, a - b);
    printf("%f * %f = %f\n",a,b, a * b);
    printf("%f / %f = %f\n",a,b, a / b);
    printf("%f to the %f power = %f\n",a,b,pow(a,b));
    printf("The square root of %f is %f\n",a,sqrt(a));
    printf("The square root of %f is %f\n",b,sqrt(b));

    return(0);
}