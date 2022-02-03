#include<stdio.h>

struct Data{
    char name[10];
    int roll;
};

int main() {
    struct Data student;
    struct Data *student_copy = &student;

    printf("Enter Name of student: ");
    scanf("%s", &student.name);
    printf("Enter roll number: ");
    scanf("%d", &student.roll);
    printf("Student Data you entered is: \n");
    printf("Student name: %s", student_copy->name);
    printf("Student roll number: %d", student_copy->roll);
    return 0;
}