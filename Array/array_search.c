#include <stdio.h>

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int itm = 2;
    int n = 5;
    int i, j;
    int fnd = 0;
    printf("array:\n");
    for (i = 0; i < n; i++)
    {
        printf("array[%d]=%d\n", i, arr[i]);
    }
    while (j < n)
    {
        if (arr[j] == itm)
        {
            fnd = 1;
            break;
        }
        j++;
    }
    if (fnd == 1)
    {
        printf("Found element %d at position %d\n", itm, j + 1);
    }
    else
    {
        printf("Element %d are not found in the array.", itm);
    }
    return 0;
}

// 1. Start
// 2. Set J = 0
// 3. Repeat steps 4 and 5 while J < N 4. IF LA[J] is equal ITEM THEN GOTO STEP 6
// 5. Set J = J + 1
// 6. PRINT J, ITEM
// 7. Stop