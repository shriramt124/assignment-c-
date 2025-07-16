#include <stdio.h>
int main()
{
    int n, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        reverse += i * i;
    printf("Sum of squares = %d\n", reverse);
    return 0;
}
