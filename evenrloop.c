# include <stdio.h>

int main()
{
    int a = 20;
    
    while (a>0)
    {
        printf("a is equal to %d\n", a);
        a-=2;
    }
    printf("I've finished the loop and the value of a is %d\n", a);

    return 0;

}