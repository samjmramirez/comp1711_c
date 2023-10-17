# include <stdio.h>

int main()
{
    float i, p, r, t;

    printf("Enter the principle amount (£): \n");
    scanf("%f", &p);

    printf("Enter the rate of interest(per annum): \n");
    scanf("%f", &r);

    printf("Enter the time period (years): \n");
    scanf("%f", &t);

    i = p * r * t;

    printf("The simple interest is %f\n", i);

    return 0;
}