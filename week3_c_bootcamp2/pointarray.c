# include <stdio.h>

typedef struct{
    double x_coord;
    double y_coord;
} POINT;

int main(){
    int array_points[10], i;
    POINT points [] = {
        {rand(0,500), rand(0,500)},
    };
    for (i=0; i < 10; i++){
        printf("Co-ordinates: (<%.2f>, <%.2f>", array_points[i].x_coord, arraypoints[i].y_coord);
    }
    return 0;
}