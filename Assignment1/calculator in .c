#include <stdio.h>
#include <stdlib.h>

int main()
{
   double num1;
    double num2;
    char operation;
    printf("Please enter your number:");
    scanf("%lf", &num1);
    printf("Please enter operation type:");
    scanf(" %c", &operation);
    printf("Please enter your second number:");
    scanf("%lf", &num2);

    if(operation == '+'){
        printf("%f", num1 + num2);
    }else if(operation == '-'){
        printf("%f", num1 - num2);
    }else if(operation == '/'){
        printf("%f", num1 / num2);
    }else if(operation == '*'){
    printf("%f", num1 * num2);
    }else{
     printf("Invalid operator");
    }




    return 0;
}

