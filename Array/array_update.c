#include <stdio.h>
#define MAX 5
int main(){
int LA[] = {1, 3, 5, 7, 8};
int n = 5;
int k = 3;     // position (1-based)
int item = 10; // new value
int i;

printf("The original array elements are:\n");
for (i = 0; i < n; i++)
{
    printf("LA[%d] = %d\n", i, LA[i]);
}
return 0;
}
// Algorithm:
// 1. Start 
// 2. Set LA[K - 1] = ITEM 
// 3. Stop