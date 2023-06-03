#include <stdio.h>

int main(void) {


    int grades_semester_matrix[2][3] = {
        { 4, 5, 6},
        { 10, 10, 9}
    };
    
    /* ranged initialization
    {[0 ... 1] = {[0 ... 2] = 0}}; == {{ 0, 0, 0}, { 0, 0, 0}};
    */

    for(int index=0; index <= 1; index++) {
        for(int jndex=0; jndex <= 2; jndex++) {
            printf("%d,", grades_semester_matrix[index][jndex]);
        }
        printf("\n");
    }
    
    return 0;
}