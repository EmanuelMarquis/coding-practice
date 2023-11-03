#include "student.h"

typedef struct blackboard Blackboard;

struct blackboard {
    Student **students;
    int size; 
};

void initBlackboard(Blackboard *blackboard) {
    blackboard->students = (Student **)malloc(sizeof(Student*));
    blackboard->size = 0; 
}

void freeBlackboard(Blackboard *blackboard) {
    free(blackboard->students);
}

void pushToBlackboard(Blackboard *blackboard, Student *student) {

    int newSize = blackboard->size + 1;

    blackboard->students = (Student **)realloc(blackboard->students, newSize * sizeof(Student*));
    blackboard->students[newSize - 1] = student;

    blackboard->size = newSize;
}