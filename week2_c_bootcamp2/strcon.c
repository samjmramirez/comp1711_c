# include <stdio.h>

void concatStrings(const char* str1, const char* str2, char* result)
{
    int length1 = 0;
    int length2 = 0;

    while(str1[length1] != '\0')
    {
        length1++;
    }

    while(str2[length2] != '\0')
    {
        length2++;
    }

    for(int i = 0; i < length1; i++)
    {
        result[i] = str1[i];
    }

    for (int i = 0; i < length2; i++)
    {
        result[length1 + i] = str2[i];
    }

    result[length1 + length2] = '\0';
}

int main()
{
    char string1[100];
    char string2[100];
    char concatonated[200];

    printf("Enter your first string: \n");
    scanf("%s", string1);

    printf("Enter another string: \n");
    scanf("%s", string2);

    concatStrings(string1, string2, concatonated);
    printf("Concatonated string: %s\n", concatonated);

    return 0;
}