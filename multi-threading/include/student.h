#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct student Student;

struct student
{
    char *name;
    int age;
    int *grades;
};

void initStudent(Student *student, char *name, unsigned int age, int *grades) {
    student->name = name;
    student->age  = age;
    student->grades = grades;
}

void printStudent(Student *student) {
    printf("name: %s\n", student->name);
    printf("age: %d\n", student->age);
    
    for(int i=0; i<=5; i++) {
        printf("grade%d: %d\n", i+1, student->grades[i]);
    }
    printf("---------------------------\n");
}