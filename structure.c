#include<stdio.h>
#include<string.h>

struct data
{
    char name[10];
    int roll;
};


int main() {
    int num, i;
    struct data student;
    struct data class1[50];
    printf("Enter number of students: ");
    scanf(" %d", &num);
    for(i=0; i<num; i++) {
        printf("Enter name: ");
        scanf(" %s", &student.name);
        printf("Enter Roll Number: ");
        scanf(" %d", &student.roll);
        class1[i] = student;
    }
    
    printf("Class Data: \n");
    for(i=0; i<num; i++) {
        printf("Name: %s\n", class1[i].name);
        printf("Roll Number: %d\n", class1[i].roll);
    }
    
    return 0;
}