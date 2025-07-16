#include <stdio.h>
int factor(int i, int n)
{
    if (n % i != 0)
    {
        return n;
    }
    return factor(i, n / i);
}
void prime_factor(int n, int i)
{
    if (n <= 1)
    {
        return;
    }
    if (n % i == 0)
    {
        printf("%d ", i);
        n = factor(i, n);
        prime_factor(n, i);
    }
    else
    {
        prime_factor(n, i + 1);
    }
}
int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);
    prime_factor(n, 2);
    return 0;
}
