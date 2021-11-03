#include <stdlib.h>

void getInput(char *filename, int *destArr, int *arrSize)
{
    FILE *f = fopen(filename, "r");
    size_t linesize = 10;
    char *line = malloc(sizeof(char) * linesize);
    size_t read = 0;
    int i = 0;

    while ((read = getline(&line, &linesize, f)) != -1)
    {
        int val = atoi(line);
        destArr[i++] = val;
    }

    *arrSize = i;
    free(line);
}
