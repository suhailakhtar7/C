#include <stdio.h>

int main() {
    int a;
    float b;
    double c;
    char d;

    printf("Enter int, float, double and char:\n");
    scanf("%d %f %lf %c", &a, &b, &c, &d);

    printf("Integer: %d\n", a);
    printf("Float: %f\n", b);
    printf("Double: %lf\n", c);
    printf("Character: %c\n", d);

    return 0;
}
