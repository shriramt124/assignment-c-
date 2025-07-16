#include <stdio.h>
int main()
{   
    float si,p,r;
    int t;
    printf("Enter Principle, Time, Rate:");
    scanf("%f %d %f", &p, &t, &r);
    si=(p*t*r)/100;

    printf("Simple Interest:%f", (si));
}