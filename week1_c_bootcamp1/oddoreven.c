# include <stdio.h>

int main()
{
    int num;

    printf("Enter any integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("This integer is even\n");
    } 
    else
    {
        printf("This integer is odd\n");
    }
    return 0;
}