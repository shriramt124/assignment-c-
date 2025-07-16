#include <stdio.h>
#include <math.h>

#define EPSILON 0.00001  // 5 significant digits

double power(double x, int n) {
    if (n == 0)
        return 1;
    return x * power(x, n - 1);
}

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

double sinSeries(double x, int term) {
    double currentTerm = power(x, 2 * term - 1) / (double)factorial(2 * term - 1);
    if (currentTerm < EPSILON)
        return 0;

    if (term % 2 == 1)
        return currentTerm - sinSeries(x, term + 1);
    else
        return currentTerm + sinSeries(x, term + 1);
}

int main() {
    double xDegrees, xRadians, result;

    printf("Enter angle in degrees: ");
    scanf("%lf", &xDegrees);

    xRadians = xDegrees * M_PI / 180.0;

    result = sinSeries(xRadians, 1);

    printf("sin(%.5lf) ≈ %.5lf\n", xDegrees, result);
    return 0;
}
