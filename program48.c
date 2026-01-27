#include <stdio.h>
struct student
{
    int id;
    char name[20];
    float marks;
};
int main()
{
    struct student s={102, "anu", 85.5};
    struct student *ptr;
    ptr=&s;
    printf("ID:%d\n", ptr->id);
    printf("Name:%s\n", ptr->name);
    printf("Marks:%.2f\n", ptr->marks);
    return 0;
}