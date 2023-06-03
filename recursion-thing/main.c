#include <stdio.h>
#include "recursion.h"    

#define LEN(arr) \
    (sizeof(list)/ sizeof(list[0]))

int main(void) {
    float* list = readInputs(4, list, 0);
    for(int i=0; i <= LEN(list)  + 1; i++)
        printf("%.1f\n", list[i]);
    return 0;
}