# 0x05. C - Pointers, arrays and strings

## Resources

#### Read or watch:

* [C - Arrays](https://intranet.alxswe.com/rltoken/PVi2XMuApOK3jfhsoqsyXw)
* [C - Pointers](https://intranet.alxswe.com/rltoken/oyHybzYBeFiLUMALpb_usA)
* [C - Strings](https://intranet.alxswe.com/rltoken/sUeh9qDyW9pePOfJIpx_Bw)
* [Memory Layout](https://intranet.alxswe.com/rltoken/0k6CD2ZMzSFOMUxMOBiAlQ)
## Learning Objectives

### General

* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables
## Tasks

## 0. 98 Battery st.

- Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
### Requirements:

Prototype: <code>void reset_to_98(int *n);</code>

Mode: mandatory

File: [0-reset_to_98.c](./0-reset_to_98.c)
<hr>

## 1. Don't swap horses in crossing a stream

- Write a function that swaps the values of two integers.
### Requirements:

Prototype: <code>void swap_int(int *a, int *b);</code><br>

Mode: mandatory

File: [1-swap.c](./1-swap.c)
<hr>

## 2. This report, by its very length, defends itself against the risk of being read

- Write a function that returns the length of a string.
### Requirements:

Prototype: <code>int _strlen(char *s);</code>

Mode: mandatory

File: [2-strlen.c](./2-strlen.c)
<hr>

## 3. I do not fear computers. I fear the lack of them

- Write a function that prints a string, followed by a new line, to stdout.
### Requirements:

Prototype: <code>void _puts(char *str);</code>

Mode: mandatory

File: [3-puts.c](./3-puts.c)
<hr>

## 4. I can only go one way. I've not got a reverse gear

- Write a function that prints a string, in reverse, followed by a new line.
### Requirements:

Prototype: <code>void print_rev(char *s);</code>

Mode: mandatory

File: [4-print_rev.c](./4-print_rev.c)
<hr>

## 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

- Write a function that reverses a string.
### Requirements:

Prototype: <code>void rev_string(char *s);</code><br>

Mode: mandatory

File: [5-rev_string.c](./5-rev_string.c)
<hr>

## 6. Half the lies they tell about me aren't true

- Write a function that prints every other character of a string, starting with the first character, followed by a new line.
### Requirements:

Prototype: <code>void puts2(char *str);</code>

Mode: mandatory

File: [6-puts2.c](./6-puts2.c)
<hr>

## 7. Winning is only half of it. Having fun is the other half

- Write a function that prints half of a string, followed by a new line.
### Requirements:

Prototype: <code>void puts_half(char *str);</code>
The function should print the second half of the string
If the number of characters is odd, the function should print the last <code>n</code> characters of the string, where <code>n = (length_of_the_string - 1) / 2</code>

Mode: mandatory

File: [7-puts_half.c](./7-puts_half.c)
<hr>

## 8. Arrays are not pointers

- Write a function that prints n elements of an array of integers, followed by a new line.
### Requirements:

Prototype: <code>void print_array(int *a, int n);</code><br>
where <code>n</code> is the number of elements of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
You are allowed to use <code>printf</code>

Mode: mandatory

File: [8-print_array.c](./8-print_array.c)
<hr>

## 9. strcpy

- Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
### Requirements:

Prototype: <code>char *_strcpy(char *dest, char *src);</code>

Mode: mandatory

File: [9-strcpy.c](./9-strcpy.c)
<hr>

## 10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers

- Write a function that convert a string to an integer.
### Requirements:

Prototype: <code>int _atoi(char *s);</code>
The number in the string can be preceded by an infinite number of characters
You need to take into account all the <code>-</code> and <code>+</code> signs before the number
If there are no numbers in the string, the function must return <code>0</code>
You are not allowed to use <code>long</code>
You are not allowed to declare new variables of “type” array
You are not allowed to hard-code special values
We will use the <code>-fsanitize=signed-integer-overflow</code> gcc flag to compile your code.

Mode: #advanced

File: [100-atoi.c](./100-atoi.c)
<hr>

## 11. Don't hate the hacker, hate the code

- Create a program that generates random valid passwords for the program 101-crackme.
### Requirements:

You are allowed to use the standard library
You don’t have to pass the <code>betty-style</code> tests (you still need to pass the <code>betty-doc</code> tests)
man <code>srand</code>, <code>rand</code>, <code>time</code>
<code>gdb</code> and <code>objdump</code> can help

Mode: #advanced

File: [101-keygen.c](./101-keygen.c)
