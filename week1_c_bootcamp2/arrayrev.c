# include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5 / 2; i++)
    {
        int temp = arr [i];
        arr[i] = arr[4-i];
        arr[4-i] = temp;
    }
    // print reversed array
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}