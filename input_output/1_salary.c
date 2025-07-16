#include <stdio.h>
int main()
{
    int sal, total;
    printf("Enter your Salary:");
    scanf("%d", &sal);
    total = sal + (sal * .4) + (sal * .2);
    printf("Your Gross Salary:%d", total);
}