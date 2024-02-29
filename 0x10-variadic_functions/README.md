# 0x10. C - Variadic functions

## Resources

#### Read or watch:

* [stdarg.h](https://intranet.alxswe.com/rltoken/wLRJdO8pA2-Vb-rF2Y71sA)
* [Variadic Functions](https://intranet.alxswe.com/rltoken/3gW8GycmyjarbJR76FkrzA)
* [Const Keyword](https://intranet.alxswe.com/rltoken/_RRPCY32VODyN_r2HIEnBQ)
## Learning Objectives

### General

* What are variadic functions
* How to use va_start, va_arg and va_end macros
* Why and how to use the const type qualifier
## Tasks

## 0. Beauty is variable, ugliness is constant

- Write a function that returns the sum of all its parameters.
### Requirements:

Prototype: <code>int sum_them_all(const unsigned int n, ...);</code>
If <code>n == 0</code>, return <code>0</code>

Mode: mandatory

File: [0-sum_them_all.c](./0-sum_them_all.c)
<hr>

## 1. To be is to be the value of a variable

- Write a function that prints numbers, followed by a new line.
### Requirements:

Prototype: <code>void print_numbers(const char *separator, const unsigned int n, ...);</code>
where <code>separator</code> is the string to be printed between numbers
and <code>n</code> is the number of integers passed to the function
You are allowed to use <code>printf</code>
If <code>separator</code> is <code>NULL</code>, don’t print it
Print a new line at the end of your function

Mode: mandatory

File: [1-print_numbers.c](./1-print_numbers.c)
<hr>

## 2. One woman's constant is another woman's variable

- Write a function that prints strings, followed by a new line.
### Requirements:

Prototype: <code>void print_strings(const char *separator, const unsigned int n, ...);</code>
where <code>separator</code> is the string to be printed between the strings
and <code>n</code> is the number of strings passed to the function
You are allowed to use <code>printf</code>
If separator is NULL, don’t print it
If one of the string is NULL, print <code>(nil)</code> instead
Print a new line at the end of your function

Mode: mandatory

File: [2-print_strings.c](./2-print_strings.c)
<hr>

## 3. To be is a to be the value of a variable

- Write a function that prints anything.
### Requirements:

Prototype: <code>void print_all(const char * const format, ...);</code>
where format is a list of types of arguments passed to the function


c: char
i: integer
f: float
s: char * (if the string is NULL, print (nil) instead
any other char should be ignored
see example

<code>c</code>: <code>char</code>
<code>i</code>: <code>integer</code>
<code>f</code>: <code>float</code>
<code>s</code>: <code>char *</code> (if the string is NULL, print <code>(nil)</code> instead
any other char should be ignored
see example
You are not allowed to use <code>for</code>, <code>goto</code>, ternary operator, <code>else</code>, <code>do ... while</code>
You can use a maximum of


2 while loops
2 if

2 <code>while</code> loops
2 <code>if</code>
You can declare a maximum of <code>9</code> variables
You are allowed to use <code>printf</code>
Print a new line at the end of your function

Mode: mandatory

File: [3-print_all.c](./3-print_all.c)
<hr>
