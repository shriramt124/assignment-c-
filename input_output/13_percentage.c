#include <stdio.h>
int main()
{
    float per;
    int s1, s2, s3, s4, s5;
    printf("Enter Marks of 5 subjects:");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
    per = ((s1 + s2 + s3 + s4 + s5) / 5);
    printf("Percentage of student is: %.2f", per);
}