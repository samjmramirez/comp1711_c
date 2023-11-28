#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arrayA[3][4], arrayB[3][4];
    int i, j;

    // seed the number generator
    srand(time(NULL));

    // assign random values to each element of the arrays
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arrayA[i][j] = rand() % 11; // generates random numbers between 0 and 10
        }
    }

    // print array to verify
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arrayA[i][j]); 
        }
        printf("\n");
    }
    return 0;
}