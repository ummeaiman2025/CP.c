#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);
    if (num1 > 0) {
        printf("First number is positive.\n");
    } else {
        printf("First number is not positive.\n");
    }

    if (num2 > 0) {
        printf("Second number is positive.\n");
    } else {
        printf("Second number is not positive.\n");
    }

    return 0;
}