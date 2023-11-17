#include <stdio.h>
#include <unistd.h>
#include <wait.h> // sys_wait
#include <pthread.h>
#include "userInputThread.h"

int main() {

    Blackboard bb = {};
    initBlackboard(&bb);
    // Student *student = (Student *)malloc(sizeof(Student));
    // int grades[6] = {10, 8, 9, 7, 10, 8};

    pthread_t userInputThreadID;

    if(pthread_create(&userInputThreadID, NULL, userInputThread, &bb) != 0) {
        printf("Failed to create userInputThread!\n");
        exit(1);
    }

    if(pthread_join(userInputThreadID, NULL) != 0) {
        printf("Failed to wait for thread %ld", userInputThreadID);
        exit(2);
    }

    freeBlackboard(&bb);
    
    return 0;
}

