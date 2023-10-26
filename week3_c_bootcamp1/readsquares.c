# include <stdio.h>
# include <stdlib.h>

int main()
{
    const char *filename = "squares.dat";
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("");
        return 1;
    }
    int buffer_size = 100;
    float average, sum = 0, length = 0;
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL)
    {
        printf("%d\n", atoi(line_buffer));
        sum += atoi(line_buffer);
        length++;
    }
    average = sum/length;
    printf("The average of the numbers in %s is %.3f\n", filename, average);
    fclose(file);
    return 0;
}