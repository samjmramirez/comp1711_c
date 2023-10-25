# include <stdio.h>

int str_len(char *str)
{
    int length = 0;
    while(*str != '\0')
    {
        length++;
        str++;
    }
    return length;
}

int main()
{
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    int length = str_len(inputString);

    printf("The length of the string is %d\n", length);
    return 0;
}