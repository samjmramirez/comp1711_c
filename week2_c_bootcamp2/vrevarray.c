# include <stdio.h>

void reverseArray(int arr[], int length)
{
    int start = 0;
    int end = length -1;
    int temp;

    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(arr)/ sizeof(arr[0]);

    printf("Original Array: ");
    for(int i =0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, length);

    printf("Reversed Array: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n"); 
    return 0;
}