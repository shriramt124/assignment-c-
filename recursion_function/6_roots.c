#include <stdio.h>
#include <math.h>

float calculateDiscriminant(float a, float b, float c)
{
    return b * b - 4 * a * c;
}

void findRoots(float a, float b, float c)
{
    float discriminant = calculateDiscriminant(a, b, c);

    if (a == 0)
    {
        printf("This is not a quadratic equation.\n");
    }
    else if (discriminant > 0)
    {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Real and distinct roots: %.2f and %.2f\n", root1, root2);
    }
    else if (discriminant == 0)
    {
        float root = -b / (2 * a);
        printf("Real and equal roots: %.2f and %.2f\n", root, root);
    }
    else
    {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-discriminant) / (2 * a);
        printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n",
               realPart, imagPart, realPart, imagPart);
    }
}

int main()
{
    float a, b, c;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    findRoots(a, b, c);

    return 0;
}