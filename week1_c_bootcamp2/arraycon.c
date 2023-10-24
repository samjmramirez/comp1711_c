# include <stdio.h>

int main()
{
    int arr1[3] = {2, 5, 3};
    int arr2[3] = {6, 9, 1};
    int arr3[6] = {};
    for (int i = 0; i < 3; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = 3; i < 6; i++)
    {
        arr3[i] = arr2[i-3];
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", arr3[i]);
    }
    return 0;
}