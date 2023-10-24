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
    int average = 0, buffer_size = 100;
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL)
    {
        printf("%d\n", atoi(line_buffer));
        sum += atoi(line_buffer)
    }
    average = sum/buffer_size
    printf("The average of the numbers in %s is %d", filename, average)
    fclose(file);
    return 0;
}