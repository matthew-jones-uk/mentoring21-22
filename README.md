# Mentoring Worksheet - C

## Question 1

How would you declare each of the following datatypes in c?

- A length 16 array of integers.
- A 2D array of 8x8 characters.
- An array of floats which, at runtime, has the size of an integer variable `n` (i.e. a dynamically allocated array of size n).

## Question 2

```c
int a, b, c = 20;

/* A */

void func1(int *n) {
    n = 10;
}

int func2(int *x, int *y) {
    *x += *y;
    return *x++;
}

int main() {
    b = ++c;
    a = b++;

    /* B */

    func1(&b);

    /* C */

    c = func2(&a, &b);

    /* D */
}

```

What are the values of a, b, and c at the following points in the code?

- A
- B
- C
- D
