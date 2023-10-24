# include <stdio.h>

int main()
{
    int arr[5] = {1, 4, 2, 9, 5};
    int max = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max=arr[i];
        }
    }
    printf("The maximum element of the array is %d\n", max);
    return 0;
}