#include <stdio.h>
void printer(int n, int i)
{
    if (i == n)
    {
        printf("%d ", n);
        return;
    }
    printf("%d ", i);
    printer(n, i + 1);
    return;
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    printer(num, 1);
}