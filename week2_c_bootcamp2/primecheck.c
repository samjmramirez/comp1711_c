# include <stdio.h>

int isPrime(int num)
{
    if (num % 2 == 0 && num != 2)
    {
        printf("0\n");
    }
    else if (num % 3 == 0 && num != 3)
    {
        printf("0\n");
    }
    else if (num % 5 == 0 && num != 5)
    {
        printf("0\n");
    }
    else if (num % 7 == 0 && num != 7)
    {
        printf("0\n");
    }
    else
    {
        printf("1\n");
    }
}

int main()
{
    int input;
    printf("Enter an integer: ");
    scanf("%d", &input);

    int result = isPrime(input);

    printf("[0 = not a prime number/ 1 = is a prime number]\n");
}

