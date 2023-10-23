# include <stdio.h>

int main()
{
    int mark;
    printf("Enter the student's mark: ");
    scanf("%d", &mark);

    if (mark == 0)
    {
        printf("A mark of %d is a fail\n", mark);
    }
    else if (mark>0 && mark<50)
    {
        printf("A mark of %d is a fail\n", mark);
    }
    else if (mark>=50 && mark<70)
    {
        printf("A mark of %d is a pass\n", mark);
    }
    else if (mark>=70 && mark<=100)
    {
        printf("A mark of %d is a distinction\n", mark);
    }
    else
    {
        printf("A mark of %d is not valid\n", mark);
    }
return 0;
}