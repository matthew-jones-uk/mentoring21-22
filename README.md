# Mentoring Worksheet - C

## Theory Questions

### Question 1

How would you declare each of the following datatypes in c?

- A length 16 array of integers.
- A 2D array of 8x8 characters.
- An array of floats which, at runtime, has the size of an integer variable `n`
(i.e. a dynamically allocated array of size n).

### Question 2

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

## Practical Tasks

### Array Manipulation

Edit the `multArrayBy` function in `arrayManipulation.c`.

It should multiply each value in `from` by `n`, then store the result in `dest`.

In: `n` = `2`, `from` = `{1, 2, 3}`

Out: `dest` = `{2, 4, 6}`

### Fibonacci

Create a function to generate (and print) the fibonacci numbers up to `n`.

Write your implementation in the `fib(int n)` function, where `n` is the input
value from the commandline (this is handled for you in `main`).

```bash
$ ./fibonacci 6
0 1 1 2 3 5

$ ./fibonacci 11
0 1 1 2 3 5 8 13 21 34 55
```

### Other programming challenges

If you enjoy these challenges, you may want to try some more. Sites like
[Project Euler](http://projecteuler.net) and [LeetCode](https://leetcode.com)
provide challenges to help test your programming skills.

Try some of them out if you want an extra challenge! Some of the mentors may
be able to help with these if they've done them before too, so drop a message
in #programming if you get stuck.
