#include <stdio.h>

int main() {
    int integerVar = 42;
    float floatVar = 3.14f;
    double doubleVar = 2.718281828;
    char charVar = 'A';
    _Bool boolVar = 1; 
    printf("Integer: %d\n", integerVar);
    printf("Float: %.2f\n", floatVar);
    printf("Double: %.9lf\n", doubleVar);
    printf("Character: %c\n", charVar);
    printf("Boolean: %s\n", boolVar ? "true" : "false");

    return 0;
}