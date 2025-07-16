#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    (num&1) ? printf("Number is odd") : printf("Number is even");
}