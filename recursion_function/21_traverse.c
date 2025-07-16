#include <stdio.h>
#include<math.h>
void traverse(int *arr[], int i, int n)
{
    if (i == n)
    {
        return;
    }
    printf("%d ", arr[i]);
    traverse(arr, i + 1, n);
}
int main()
{
    int arr[] = {1, 2, 45, 6, 7, 31, 8, 9, 13};
    int n=9;
    traverse(&arr,0,9);
}