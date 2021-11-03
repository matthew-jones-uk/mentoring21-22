#include "helpers/array.h"

void multArrayBy(int n, int *from, int *dest)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        dest[i] = from[i] * n;
    }
}

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int newArr[5];
    int factor = 3;

    multArrayBy(factor, arr, newArr);

    compareAnswer(arr, newArr, (sizeof(arr) / sizeof(int)), (sizeof(newArr) / sizeof(int)), factor);
}
