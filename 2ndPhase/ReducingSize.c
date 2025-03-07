#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    int starting_size, new_size, i;
    printf("Enter the initial size of the array: ");
    scanf("%d", &starting_size);
    arr = (int *)malloc(starting_size * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter the elements of the array:\n");
    for (i = 0; i < starting_size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the new size of the array: ");
    scanf("%d", &new_size);
    arr = (int *)realloc(arr, new_size * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    for (i = starting_size; i < new_size; i++)
    {
        arr[i] = 0;
    }

    printf("Array after resizing :\n");
    for (i = 0; i < new_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

    return 0;
}