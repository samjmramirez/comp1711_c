# include <stdio.h>

int main()
{
    int a;
    int b;
    int temp;

    printf("Enter two integers: \n");
    scanf("%d %d", &a, &b);
    printf("Before swapping: \nFirst Variable = %d\nSecond Variable = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: \nFirst Variable = %d\nSecond Variable = %d\n", a, b);

    return 0;
}