#include <stdio.h>

int main()
{
    int radius;
    printf("Enter radius of circle:");
    scanf("%d", &radius);
    printf("The area of the circle is %.2f\n", 3.14 * radius * radius);
    printf("The perimeter of circle is %2f", 2 * 3.14 * radius);
    return 0;
}