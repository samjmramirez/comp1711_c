#include <stdio.h>

int main()
{
    float length;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    float width;
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    float area;
    area = length * width;

    printf("The area of a rectangle of length %f and width %f is %f\n", length , width, area);

    return 0;
}