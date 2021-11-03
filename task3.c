#include <stdio.h>
#include <stdlib.h>
#include "helpers/getInput.h"

#define TARGET_VALUE 2020

/* 
TASK:
    Given an array of integers, find the two numbers which sum to 2020.
    Return the product of those two numbers.
*/
int solve(int *input, int size)
{
    /** O(n^2) solution **/
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (input[i] + input[j] == TARGET_VALUE)
                return input[i] * input[j];
        }
    }
    printf("Cannot find pair of numbers!\n");
    return 0;
}

int main(int argc, char **argv)
{
    int arrSize = 200;
    int *destArr = malloc(sizeof(int) * arrSize);
    getInput("task3_input.txt", destArr, &arrSize);
    printf("%d\n", solve(destArr, arrSize));
    free(destArr);
    return 0;
}
