# include <stdio.h>
# include <stdlib.h>

int main(){
    char filename[] = "number.dat";
    FILE *file = fopen(filename, "a");
    if (file == NULL)
    {
        perror(" ");
        return 1;
    }

    float number, sum = 0, average = 0;
    int count = 0;

    while(fscanf(file, "%f", &number) == 1){
        sum += number;
        count++;
    }

    fclose(file);

    if (count > 0){
        average = sum / count;

        file = fopen(filename, "a");

        if (file == NULL){
            perror(" ");
            return 1;
        }

        fprintf(file, "\n%.6f", average);
        printf("Average %.6f appended to %s.\n", average, filename);

        fclose(file);
    }
    else{
        printf("No valid numbers found in the file.\n");
    }
    return 0;
}