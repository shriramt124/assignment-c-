#include <stdio.h>
#include <math.h>
void sum(int arr[], int i, int n, int s)
{
    if (i == n)
    {
        printf("Sum of array:%d", s);
        return;
    }
    sum(arr, i + 1, n, s + arr[i]);
}
int main()
{
    int arr[] = {1, 2, 45, 6, 7, 31, 8, 9, 13};
    int n = 9;
    sum(arr, 0, 9, 0);
}