#include <stdio.h>
void sum(int i, int n, int s)
{
    if (i == n + 1)
    {
        printf("%d", s);
        return;
    }
    sum(i + 1, n, s + i);
}
int main()
{
    int num1;
    printf("Enter a number:");
    scanf("%d", &num1);
    sum(1, num1, 0);
}