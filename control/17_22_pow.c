#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, result = 1;
    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &y);
    result = pow(x,y);
        printf("%d^%d = %d\n", x, y, result);
    return 0;
}