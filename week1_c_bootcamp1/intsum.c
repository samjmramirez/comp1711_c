# include <stdio.h>

int main()
{
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);

    int b;
    printf("Enter another integer: ");
    scanf("%d", &b);

    int c;
    c = a + b;

    printf("The sum of %d and %d is %d\n", a , b, c);

    return 0;
}