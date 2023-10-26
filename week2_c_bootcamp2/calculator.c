# include <stdio.h>

float calculate(float num1, float num2, char op)
{
    float result;
    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;
    
        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if (num2 != 0)
            {
                result = num1 / num2;
            }
            else
            {
                printf("Error: Division by zero! \n");
                return 0;
            }
            break;
        default:
            printf("Error: Invalid operator! \n");
            return 0;
    }
    return result;
}

int main()
{
    float num1, num2, result;
    char op;

    printf("Enter your first number: \n");
    scanf("%f", &num1);

    printf("Enter your second number: \n");
    scanf("%f", &num2);

    printf("Enter an operator (+, -, *, /): \n");
    scanf(" %c", &op);

    result = calculate(num1, num2, op);

    printf("The result of %f %c %f is %.2f\n", num1, op, num2, result);

    return 0;
}