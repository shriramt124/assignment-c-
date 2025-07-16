#include <stdio.h>
int main() {
    int i, hours, overtime;
    for (i = 1; i <= 10; i++) {
        printf("Enter hours worked by employee %d: ", i);
        scanf("%d", &hours);
        if (hours > 40) {
            overtime = hours - 40;
            printf("Overtime pay = Rs. %d\n", overtime * 12);
        } else {
            printf("No overtime pay\n");
        }
    }
    return 0;
}
