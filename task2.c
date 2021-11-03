#include <stdio.h>
#include <stdlib.h>

void fib(int n)
{
    int i, prev = 1, prev2 = 0;
    printf("%d %d", prev2, prev);
    for (i = 0; i < n - 2; i++)
    {
        int temp = prev;
        prev = prev + prev2;
        prev2 = temp;
        printf(" %d", prev);
    }
    printf("\n");
}

void lucas(int n, int a, int b)
{
    /** EXTENSION **/
    /** Remember to change the function call in main! **/
    int i;
    printf("%d %d", b, a);
    for (i = 0; i < n - 2; i++)
    {
        int temp = a;
        a = a + b;
        b = temp;
        printf(" %d", a);
    }
    printf("\n");
}

int main(int argc, char **argv)
{

    if (argc != 2)
        printf("Incorrect number of arguments supplied.");
    fib(atoi(argv[1]));
    /** lucas(atoi(argv[3]), atoi(argv[2]), atoi(argv[1])); **/

    return 0;
}
