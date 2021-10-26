#include <stdio.h>

void compareAnswer(int *a, int *b, int length_a, int length_b, int factor) {
    int i;
    int success = 1;

    if(length_a != length_b) {
        printf("Array size has changed. Answer incorrect.\n");
        success = 0;
    } else {
        for (i = 0; i < length_a; i++) {
            if(factor * a[i] != b[i]) {
                printf("Value at index %d differs: %d in original, %d in output\n", i, a[i], b[i]);
                success = 0;
            }
        }
    }

    if(success) {
        printf("Congratulations! You got it right!\n");
    } else {
        printf("Sorry, that doesn't seem right. Try again.\n");
    }
}
