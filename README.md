# Mentoring Worksheet - C

Welcome to the second mentor session! This workshop will have some theory-based
questions similar to the examples Jamie will show you in lectures, and some
practical exercises.

To get a copy of this repo (so you can code your own solutions), clone this repo
by running the following command:

```bash
git clone https://github.com/aidandagnall/mentoring21-22.git
```

Your mentor should be running this session with you, so feel free to ask any
questions to them either during your meeting, or afterwards through Teams or
Discord.

## Theory Questions

### Question 1

How would you declare each of the following datatypes in c? Use any variable
name you like.

- An integer array of length 16.
- A 2D array of characters, 8x8 length.
- An integer pointer.
- An array of integer pointers of size 10.

### Question 2

```c
void func1(int *n) {
    *n = 10;
}

int func2(int *x, int *y) {
    *x += *y;
    return *x++;
}

int main() {
    int i, j, k = 20;

    /* A */

    j = ++k;
    i = j++;

    /* B */

    func1(&j);

    /* C */

    k = func2(&i, &j);

    /* D */
}

```

What are the values of i, j, and k at the following points in the code?

- A
- B
- C
- D

## Practical Tasks

### Task 1: Array Manipulation

Edit the `multArrayBy` function in `task1.c`.

It should multiply each value in the array `from` by `n`, then store the result
at the same index in the array `dest`.

In: `n` = `2`, `from` = `{1, 2, 3}`

Out: `dest` = `{2, 4, 6}`

### Task 2: Fibonacci

Create a function to generate (and print) the fibonacci numbers up to `n`.

Write your implementation in the `fib(int n)` function, where `n` is the input
value from the commandline (this is handled for you in `main`).

```bash
$ ./fibonacci 6
0 1 1 2 3 5

$ ./fibonacci 11
0 1 1 2 3 5 8 13 21 34 55
```

#### Extension Task: Generalise for any two starting numbers

Fibonnacci's sequence is part of a whole family of sequences called Lucas sequences,
where the next number is given by adding the last two.

Generalise your function to the form `void lucas(int a, int b, int n)`
where `a` and `b` are the starting values. Then, use this new function to generate
another lucas sequence, the [lucas numbers](https://en.wikipedia.org/wiki/Lucas_number):

```bash
$ ./fibonnaci 2 1 8
2, 1, 3, 4, 7, 11, 18, 29
```

### Task 3: Finding a sum in a data set (AOC 2020 Day 1)

Given an array of integers, find the two which sum (add) together to make `2020`
and then return the product of these two numbers.

Implement your solution in the `solve` function, where `input` is your array,
and `size` is the array's length. Don't worry about reading in the numbers,
we've done this for you. Just complete the `solve` function.

Your return value should be `926464`.

### Getting More Practice

The best thing you can do to improve your skills in C (and programming in
general) is practice. These are some useful websites for you to try out if you
want to go further.

[Project Euler](http://projecteuler.net) is great for mathematical
problems, but they get hard quickly. If you want to challenge yourself, try out
the [Advent Of Code](https://adventofcode.com) this year. During Advent (1 - 25
Dec) there's a new programming problems every day, you can complete them in any
programming language you want, and you can join the HackSoc leaderboard to
compete with other people at the university! (Task 3 was from Advent of Code
2020)

Sites like [LeetCode](https://leetcode.com) or
[HackerRank](https://www.hackerrank.com) are great for getting practice for
interview questions when it comes to find a graduate job, year in industry
placement or internship.  challenges to help test your programming skills.

Try some of them out if you want to push yourself! Some of the mentors may be
able to help with these if they've done them before too, so drop a message in
\#programming on the Discord server if you get stuck.
