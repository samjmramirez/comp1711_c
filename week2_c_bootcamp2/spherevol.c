# include <stdio.h>

float volume(float r)
{
    float answer, pi = 3.14159265, fraction = 1.3333333;
    answer = (fraction * pi * r * r * r);
    return answer;
}

int main()
{
    float rad;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &rad);
    float a = volume(rad);

    printf("The volume of the sphere is %.3f\n", a);
}