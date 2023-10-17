# include <stdio.h>

int main()
{
    int temp;
    printf("Enter the temperature in Celcius: ");
    scanf("%d", &temp);

    if (temp>-10 && temp<40)
    {
        printf("The temperature %d is within the given range\n", temp);
    }
    else{
        printf("The temperature %d is not within the given range\n", temp);
    }

return 0;
}