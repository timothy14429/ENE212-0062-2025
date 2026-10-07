#include <stdio.h>
#include <stdlib.h>

int main()
{
    double radius;
    double pi=3.142;
    double result;

    printf("Please enter the radius:");
    scanf("%lf", &radius);


    result = pi* radius * radius;
    printf("%f", result);
    return 0;
}
