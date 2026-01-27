#include <stdio.h>
struct student {
    int id;
    char name[20];
    float marks;
};
void display(struct student s) {
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}
int main() {
    struct student s1 = {101, "faizan", 89.5};
    display(s1);
    return 0;
}