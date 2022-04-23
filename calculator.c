#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1,num2;
    char operator;
    printf("Enter the operator ( +,-,*,/):");
    scanf("%c",&operator);
    printf("Enter the numbers:");
    scanf("%lf %lf",&num1,&num2);
    switch (operator)
    {
        case '+':
        printf("%lf + %lf = %lf",num1,num2,(num1 + num2));
        break;

        case '-':
        printf("%lf - %lf = %lf",num1,num2,(num1 - num2));
        break;

    
        case '*':
        printf("%lf * %lf = %lf",num1,num2,(num1 * num2));
        break;


        case '/':
            if ( num2 != 0.0)
                 printf("%lf / %lf = %lf",num1,num2,(num1 / num2));
            else
                printf("Divided by zero");
            break;
        
        default:
            printf("Invalid operator");
        
    }

    return 0;
}