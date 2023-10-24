# include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int last = arr[4];
    
    for(int i = 4; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = last;
    // print rotated array
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}