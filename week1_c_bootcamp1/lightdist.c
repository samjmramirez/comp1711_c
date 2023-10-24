# include <stdio.h>

int main()
{
    double speed = 299792458;
    long long int time;
    double distance;

    printf("Enter time in days: ");
    scanf("%lld", &time);
    
    time = time * 24 * 60 * 60; //convert days to seconds
    distance = speed * time;

    printf("Distance: %.2e meter\n", distance);
    return 0;
}