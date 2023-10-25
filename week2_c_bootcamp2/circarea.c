# include <stdio.h>

float area(float r)
{
    float answer;
    float pi = 3.142;
    answer = pi * r * r;
    return answer;
}

int main()
{
    float rad;
    printf("Enter the radius of the circle: \n");
    scanf("%f", &rad);

    float a = area(rad);

    printf("The area of the circle is %.3f\n", a);
}