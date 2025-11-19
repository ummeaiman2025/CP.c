#include <stdio.h>

int main() {
    char name[50];
    int age;
    float marks;

    // Input student details
    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter marks: ");
   scanf("%f", &marks);

    // Display student details
    printf("\n--- Student Details ---\n");
    printf("Name  : %s", name);
    printf("Age   : %d\n", age);
    printf("Marks : %.2f\n", marks);

    return 0;
}