#include <stdio.h>
int find_max(int a[], int n, int max)
{
    int temp = a[n-1] >= a[n-2]? a[n-1] : a[n-2];
    max = max >= temp? max:temp;
    if (n == 0) return max;
    return find_max(a,n-1,max);
}

int main()
{
    int a[] = {1, 2, 3, 4};
    printf("Max: %d", find_max(a, 4, 0));

    return 1;
}