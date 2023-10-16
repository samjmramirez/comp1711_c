# include <stdio.h>

int main()
{
    int a, square;
    scanf("%d", &square);
    for (a=1; a<=10; a++)
    {
        square = a*a;
        printf("The square of a is %d\n", square);
    }
    printf("I've finished the loop and the value of a is %d", a);
 
    return 0;
}