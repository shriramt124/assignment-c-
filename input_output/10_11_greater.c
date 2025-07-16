#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter a num1:");
    scanf("%d", &num1);
    
    printf("Enter a num2:");
    scanf("%d", &num2);
    (num1>num2)?printf("Sum:%d",num1+num2):printf("Difference:%d",num1-num2);
}