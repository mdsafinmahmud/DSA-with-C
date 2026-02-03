#include <stdio.h>

int binarySearch(int arr[], int n, int target, int *comparisons)
{
    int low = 0, high = n - 1;
    while (low <= high)
        while (low <= high)
        {
            (*comparisons)++;
            int mid = low + (high - low) / 2;
            if (arr[mid] == target)
                return mid;
            else if (arr[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
    return -1;
}
int main()

{
    int n, target, i;
    int comparisons = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int studentID[n];
    printf("Enter sorted student ID:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &studentID[i]);
    }
    printf("Enter ID to search:\n");
    scanf("%d", &target);
    int result = binarySearch(studentID, n, target, &comparisons);
    if (result != -1)
    {
        printf("Student ID found at position %d and ELIGIBLE for Exam.\n", result + 1);
    }
    else
    {
        printf("Student id not found and not ELIGIBLE for Exam.\n");
    }
    printf("Number of Comparisons perfomed: %d\n", comparisons);

    return 0;
}