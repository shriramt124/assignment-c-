#include <stdio.h>
int main() {
    float time;
    printf("Enter time taken (in hours): ");
    scanf("%f", &time);
    if (time >= 2 && time < 3)
        printf("Highly efficient\n");
    else if (time >= 3 && time < 4)
        printf("Improve speed\n");
    else if (time >= 4 && time < 5)
        printf("Training Required\n");
    else if (time >= 5)
        printf("Leave the company\n");
    else
        printf("Invalid time\n");
    return 0;
}
