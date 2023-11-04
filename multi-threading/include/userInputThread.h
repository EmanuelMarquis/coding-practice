#include "blackboard.h"

void gatherUserInput(Blackboard *blackboard) {
    while(1) {
        int  answr; 
        char *tmp_name = (char *)malloc(64 * sizeof(char)); 
        int  *tmp_grades = (int *)calloc(5, sizeof(int)), tmp_age;

        printf("Do you want to register a student? 1 = no ; 0 = yes\n");
        scanf("%d", &answr);
        getchar(); // clear buffer
        
        if(answr != 0) break;

        printf("What's the student's name ?\n");
        scanf("%s", tmp_name);
        getchar();
                
        printf("What's the student's age ?\n");
        scanf("%d", &tmp_age);
        getchar();

        for(int i=0; i<= 5; i++) {
            printf("What's the student's %dst grade ?\n", i + 1);
            scanf("%d", &tmp_grades[i]);
            getchar();
        }

        Student *student = (Student *)malloc(sizeof(Student));
        initStudent(student, tmp_name, tmp_age, tmp_grades);
        pushToBlackboard(blackboard, student);
    }
}

void *userInputThread(void *arg) {
    Blackboard *blackboard = (Blackboard *)arg;

    gatherUserInput(blackboard);
    
    for(int i=0; i<blackboard->size; i++) {
        printStudent(blackboard->students[i]);
    }

    printf(">> end userInputThread!\n");
    return NULL;
}