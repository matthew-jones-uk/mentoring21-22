#include <stdio.h>
#include <stdlib.h>
#include "helpers/getInput.h"

/* 
TASK:
    Given an array of integers, find the two numbers which sum to 2020.
    Return the product of those two numbers.
*/
int solve(int * input, int size)
{
    /** WRITE YOUR CODE HERE **/
}

int main(int argc, char ** argv)
{
    int arrSize = 200;
    int * destArr = malloc(sizeof(int) * arrSize);
    getInput("task3_input.txt", destArr, &arrSize);
    printf("%d\n", solve(destArr, arrSize));
    free(destArr);
    return 0;
}
