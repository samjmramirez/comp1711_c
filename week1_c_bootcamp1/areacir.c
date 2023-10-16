# include <stdio.h>

int main()
{
    float pi = 3.41;
    float r;
    float area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    
    area = pi * r * r;

    printf("The area of a circle with the radius of %f is %f\n", r, area);

    return 0;
}