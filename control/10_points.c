int main() {
    int x1, y1, x2, y2, x3, y3;
    printf("Enter coordinates of 3 points: ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    if ((y2 - y1)*(x3 - x1) == (y3 - y1)*(x2 - x1))
        printf("Points are on the same line\n");
    else
        printf("Not on same line\n");
    return 0;
}
