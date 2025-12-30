#include <stdio.h>

int main() {
    int a, b, sum;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Calculate sum
    sum = a + b;
    printf("Sum = %d\n", sum);

    // Find largest
    if (a > b) {
        printf("Largest = %d\n", a);
    } else if (b > a) {
        printf("Largest = %d\n", b);
    } else {
        printf("Both numbers are equal\n");
    }

    return 0;
}
