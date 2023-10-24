# include <stdio.h>

int main()
{
    char filename[] = "squares.dat";
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        perror(" ");
        return 1;
    }
    int i, user_input, number;
    printf("Enter how many squared numbers you wish to enter: ");
    scanf("%d", &user_input);
    for (i = 1; i < user_input; i++)
    {
        number = i * i;
        fprintf(file, "%d\n", number);
    }
    fclose(file);
    return 0;
}