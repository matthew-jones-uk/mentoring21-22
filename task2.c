#include <stdio.h>
#include <stdlib.h>

void fib(int n) {
    /** WRITE YOUR CODE HERE **/
}

int main (int argc, char ** argv) {

    if (argc != 2)
        printf("Incorrect number of arguments supplied.");
    fib(atoi(argv[1]));

    return 0;
}

