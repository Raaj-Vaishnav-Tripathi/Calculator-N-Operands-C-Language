#include <stdio.h>//Only one library required.

int main()
{
    char operator;//For taking the Operator input in character variable.
    int n, i;//For the size of Operand array and i for iteration of loop.
    double extra = 0;//For saving the updated values after performing selected operations or at intial stage for storing 1st value.
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter Number of Operands: ");
    scanf("%d", &n);
    double operands[n];//Operand Array for taking the input of N Operands and size of array is already provided by user as N is size of Array. 
    printf("Enter %d operands below:-\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &operands[i]);
    }

    switch (operator)//Here, I Used Switch Cases for all 4 operations and added defination of all 4 Arithematic Operations. 
    {
    case '+':
        for (i = 0; i < n; i++)
        {
            if (i < n - 1)
            {
                printf("%.1lf + ", operands[i]);
                extra = extra + operands[i];
            }
            else
            {
                printf("%.1lf", operands[i]);
                extra = extra + operands[i];
                printf(" = %.1lf", extra);
            }
        }
        break;
    case '-':
        for (i = 0; i < n; i++)
        {
            if (i == 0)
            {
                printf("%.1lf - ", operands[i]);
                extra = extra + operands[i];
            }
            else if (i < n - 1)
            {
                printf("%.1lf - ", operands[i]);
                extra = extra - operands[i];
            }
            else
            {
                printf("%.1lf", operands[i]);
                extra = extra - operands[i];
                printf(" = %.1lf", extra);
            }
        }
        break;
    case '*':
        for (i = 0; i < n; i++)
        {
            if (i == 0)
            {
                printf("%.1lf x ", operands[i]);
                extra = extra + operands[i];
            }
            else if (i < n - 1)
            {
                printf("%.1lf x ", operands[i]);
                extra = extra * operands[i];
            }
            else
            {
                printf("%.1lf", operands[i]);
                extra = extra * operands[i];
                printf(" = %.1lf", extra);
            }
        }
        break;
    case '/':
        extra = operands[0];
        for (i = 0; i < n-1; i++)
        {
            extra = extra / operands[i + 1];
            printf("%.1lf ", extra);
        }
        break;
    default:
        printf("Error! operator is not correct");
    }
    return 0;
}
