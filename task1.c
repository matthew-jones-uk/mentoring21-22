#include "helpers/array.h"

#define ARRAY_SIZE 5

void multArrayBy(int n, int *from, int *dest) {
    /** WRITE YOUR CODE HERE **/
}

int main(void) {
    int arr[ARRAY_SIZE] = {1, 2, 3, 4, 5};
    int newArr[ARRAY_SIZE];
    int factor = 3;

    multArrayBy(factor, arr, newArr);
    
    compareAnswer(arr, newArr, (sizeof(arr) / sizeof(int)), (sizeof(newArr) / sizeof(int)), factor);
}
