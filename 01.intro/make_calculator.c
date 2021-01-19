#include <stdio.h>
int main()
{
    char operator;
    double first, second;
    printf("Enter Operator(+, -, *,):\n");
    scanf("%c", &operator);
    printf("Enter two operands:\n");
    scanf("%lf %lf", &first, &second);
    switch (operator)
    {
    case '+':
        printf("%.1lf + %.1lf = %.ilf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.ilf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.ilf", first, second, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.ilf", first, second, first / second);
        break;

    default:
        printf("You Entry wrong operator");
        
    }
    return 0;
}