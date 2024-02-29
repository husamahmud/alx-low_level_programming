# 0x04. C - More functions, more nested loops

## Resources

#### Read or watch:

* [Nested while loops](https://intranet.alxswe.com/rltoken/aDRkFzUkVysnD94Dpm3w5g)
* [C - Functions](https://intranet.alxswe.com/rltoken/zf4IZeoe0yFZL2X7_nznQQ)
* [Learning to Program in C (Part 06)](https://intranet.alxswe.com/rltoken/iQ87CI4Lf41U_uRh9QsoQA)
* [What is the purpose of a function prototype?](https://intranet.alxswe.com/rltoken/pUXhvD6-xl5BbWyj1AhCEA)
* [C - Header Files](https://intranet.alxswe.com/rltoken/IFY075ffrszSJvHqPAa-zQ)

## Learning Objectives

### General

* What are nested loops and how to use them
* What is a function and how do you use functions
* What is the difference between a declaration and a definition of a function
* What is a prototype
* Scope of variables
* What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
* What are header files and how to to use them with #include

## Tasks

## 0. isupper

- Write a function that checks for uppercase character.

### Requirements:

Prototype: <code>int _isupper(int c);</code>
Returns <code>1</code> if <code>c</code> is uppercase
Returns <code>0</code> otherwise

Mode: mandatory

File: [0-isupper.c](./0-isupper.c)
<hr>

## 1. isdigit

- Write a function that checks for a digit (0 through 9).

### Requirements:

Prototype: <code>int _isdigit(int c);</code>
Returns <code>1</code> if <code>c</code> is a digit
Returns <code>0</code> otherwise

Mode: mandatory

File: [1-isdigit.c](./1-isdigit.c)
<hr>

## 2. Collaboration is multiplication

- Write a function that multiplies two integers.

### Requirements:

Prototype: <code>int mul(int a, int b);</code>

Mode: mandatory

File: [2-mul.c](./2-mul.c)
<hr>

## 3. The numbers speak for themselves

- Write a function that prints the numbers, from 0 to 9, followed by a new line.

### Requirements:

Prototype: <code>void print_numbers(void);</code>
You can only use <code>_putchar</code> twice in your code

Mode: mandatory

File: [3-print_numbers.c](./3-print_numbers.c)
<hr>

## 4. I believe in numbers and signs

- Write a function that prints the numbers, from 0 to 9, followed by a new line.

### Requirements:

Prototype: <code>void print_most_numbers(void);</code>
Do not print <code>2</code> and <code>4</code>
You can only use <code>_putchar</code> twice in your code

Mode: mandatory

File: [4-print_most_numbers.c](./4-print_most_numbers.c)
<hr>

## 5. Numbers constitute the only universal language

- Write a function that prints 10 times the numbers, from 0 to 14, followed by a
	new line.

### Requirements:

Prototype: <code>void more_numbers(void);</code>
You can only use <code>_putchar</code> three times in your code

Mode: mandatory

File: [5-more_numbers.c](./5-more_numbers.c)
<hr>

## 6. The shortest distance between two points is a straight line

- Write a function that draws a straight line in the terminal.

### Requirements:

Prototype: <code>void print_line(int n);</code>
You can only use <code>_putchar</code> function to print
Where <code>n</code> is the number of times the character <code>_</code> should
be printed
The line should end with a <code>\n</code>
If <code>n</code> is <code>0</code> or less, the function should only
print <code>\n</code>

Mode: mandatory

File: [6-print_line.c](./6-print_line.c)
<hr>

## 7. I feel like I am diagonally parked in a parallel universe

- Write a function that draws a diagonal line on the terminal.

### Requirements:

Prototype: <code>void print_diagonal(int n);</code>
You can only use <code>_putchar</code> function to print
Where <code>n</code> is the number of times the character <code>\</code> should
be printed
The diagonal should end with a <code>\n</code>
If <code>n</code> is <code>0</code> or less, the function should only print
a <code>\n</code>

Mode: mandatory

File: [7-print_diagonal.c](./7-print_diagonal.c)
<hr>

## 8. You are so much sunshine in every square inch

- Write a function that prints a square, followed by a new line.

### Requirements:

Prototype: <code>void print_square(int size);</code>
You can only use <code>_putchar</code> function to print
Where <code>size</code> is the size of the square
If <code>size</code> is <code>0</code> or less, the function should print only a
new line
Use the character <code>#</code> to print the square

Mode: mandatory

File: [8-print_square.c](./8-print_square.c)
<hr>

## 9. Fizz-Buzz

- The “Fizz-Buzz test” is an interview question designed to help filter out the
	99.5% of programming job candidates who can’t seem to program their way out of
	a wet paper bag.

### Requirements:

Each number or word should be separated by a space
You are allowed to use the standard library

Mode: mandatory

File: [9-fizz_buzz.c](./9-fizz_buzz.c)
<hr>

## 10. Triangles

- Write a function that prints a triangle, followed by a new line.

### Requirements:

Prototype: <code>void print_triangle(int size);</code>
You can only use <code>_putchar</code> function to print
Where <code>size</code> is the size of the triangle
If <code>size</code> is <code>0</code> or less, the function should print only a
new line
Use the character <code>#</code> to print the triangle

Mode: mandatory

File: [10-print_triangle.c](./10-print_triangle.c)
<hr>

## 11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic

- The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.

### Requirements:

You are allowed to use the standard library
Your program will be compiled with this command: <code>gcc -Wall -pedantic
-Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm</code>

Mode: #advanced

File: [100-prime_factor.c](./100-prime_factor.c)
<hr>

## 12. Numbers have life; they're not just symbols on paper

- Write a function that prints an integer.

### Requirements:

Prototype: <code>void print_number(int n);</code>
You can only use <code>_putchar</code> function to print
You are not allowed to use <code>long</code>
You are not allowed to use arrays or pointers
You are not allowed to hard-code special values

Mode: #advanced

File: [101-print_number.c](./101-print_number.c)
