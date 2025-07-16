#include <stdio.h>
int max(int arr[], int i, int n)
{
    if (i == n - 1)
    {
        return arr[i];
    }
    int maxx x= max(arr, i + 1, n);
    return (arr[i] > maxx ? arr[i] : maxx);
}
int min(int arr[], int i, int n)
{
    if (i == n - 1)
    {
        return arr[i];
    }
    int mini = min(arr, i + 1, n);
    return (arr[i] < mini ? arr[i] : mini);
}
int main()
{
    int arr[] = {1, 2, 45, 6, 7, 31, 8, 9, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Max  and min of array: %d %d", max(arr, 0, n), min(arr, 0, n));
}