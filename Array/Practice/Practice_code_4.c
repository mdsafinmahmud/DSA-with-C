#include <stdio.h>

int main()
{
    int i, n, target;
    printf("Enter Array Size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d Elements :\n ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to search:");
    scanf("%d", &target);
    int fnd = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
            printf("Found it at index %d", i);
    }
    return 0;
}