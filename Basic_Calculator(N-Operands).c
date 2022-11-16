#include <stdio.h>

int main()
{
    char operator;
    int n, i;
    double extra = 0;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter Number of Operands: ");
    scanf("%d", &n);
    double operands[n];
    printf("Enter %d operands below:-\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &operands[i]);
    }

    switch (operator)
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
        for (i = 0; i < n; i++)
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

// #include <stdio.h>

// int main() {

//   char op;
//   double first, second;
//   printf("Enter an operator (+, -, *, /): ");
//   scanf("%c", &op);
//   printf("Enter two operands: ");
//   scanf("%lf %lf", &first, &second);

//   switch (op) {
//     case '+':
//       printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
//       break;
//     case '-':
//       printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
//       break;
//     case '*':
//       printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
//       break;
//     case '/':
//       printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
//       break;
//     // operator doesn't match any case constant
//     default:
//       printf("Error! operator is not correct");
//   }

//   return 0;
// }