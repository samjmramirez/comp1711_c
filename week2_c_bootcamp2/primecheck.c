# include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0; // not prime
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0; //not prime
        }
    }
    return 1; //prime number
}

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (isPrime(num)){
        printf("%d is a prime number.\n", num);
    }
    else{
        printf("%d is not a prime number.\n",num);
    }
    return 0;
}

