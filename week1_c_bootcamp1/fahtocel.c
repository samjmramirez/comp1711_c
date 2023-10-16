# include <stdio.h>

int main()
{
    float fah;
    float cel;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fah);

    cel = (fah-32) * 5 / 9;

    printf("This temperature in Celcius is %f\n", cel);

    return 0;
}