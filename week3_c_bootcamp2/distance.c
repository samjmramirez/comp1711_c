# include <stdio.h>
# include <stdlib.h>

typedef struct {
    double x, y;
} point;

double compute_distance_on_real_line (double x, double y) {
    if (x > y)
        return x - y;
    else
        return y - x;
}

double compute_manhattan_distance (point p1, point p2) {
    return compute_distance_on_real_line(p1.x, p2.x) + compute_distance_on_real_line(p1.y, p2.y);
}

int main() {
    int number_of_points = 10, i;
    point points [number_of_points];
    srand(0);
    for (i = 0; i < number_of_points; i++) {
        points[i].x = rand() / (double)RAND_MAX;
        points[i].y = rand() / (double)RAND_MAX;
    }
    double total_manhattan_distance = 0;
    for (i = 0; i < number_of_points -1; i++) {
        total_manhattan_distance += compute_manhattan_distance(points[i], points[i+1]);
    }
    printf("The average Manhattan distance is %.2lf\n", total_manhattan_distance / (number_of_points -1));
    return 0;
}