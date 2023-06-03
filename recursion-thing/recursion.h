#include <stdio.h>

float* readInputs(int size, float inputList[], int index) {
    printf("num %d: ", index);
    scanf("%f", &inputList[index]);
    fflush(stdin);

    index++;
    if(index < size)
        return readInputs(size, inputList, index);

    return inputList;
}