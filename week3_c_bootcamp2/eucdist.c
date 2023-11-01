#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double x, y;
} point;

double compute_squared_euclidean_distance(point p1, point p2) {
    double distance_x = (p1.x - p2.x);
    double distance_y = (p1.y - p2.y);
    return distance_x *distance_x + distance_y * distance_y;
}

int main(){
    int number_of_points = 100, i, j;
    point points [number_of_points];

    // Generate random number in (0,1] - roughly
    srand(0);
    for (i = 0; i < number_of_points; i++){
        points[i].x = rand() / (double)RAND_MAX;
        points[i].y = rand() / (double)RAND_MAX;
    }
    double min_distance = 1./0.;  // Give infinity in floating point
    int min_indicies [2] = {-1, -1};
    for (i = 0; i < number_of_points -1 ; i++){
        for (j = i + 1; j < number_of_points; j++){
            double distance = compute_squared_euclidean_distance(points[i], points[j]);
            if (distance < min_distance){
                min_indicies[0] = i;
                min_indicies[1] = j;
                min_distance = distance;
            }
        }
    }
    printf("The minimum distance is between points %d and %d. \n", min_indicies[0], min_indicies[1]);
    return 0;
}