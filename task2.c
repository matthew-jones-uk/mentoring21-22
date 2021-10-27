#include <stdio.h>
#include <stdlib.h>

void fib(int n) {
    /** WRITE YOUR CODE HERE **/
}

void lucas(int n, int a, int b) {
    /** EXTENSION **/
    /** Remember to change the function call in main! **/
}

int main (int argc, char ** argv) {

    if (argc != 2)
        printf("Incorrect number of arguments supplied.");
    fib(atoi(argv[1]));

    return 0;
}

