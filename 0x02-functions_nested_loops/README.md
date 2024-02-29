# 0x02. C - Functions, nested loops

## Resources

#### Read or watch:

* [Nested while loops](https://intranet.alxswe.com/rltoken/_4aLZ5nW24njUT2VbSZdQQ)
* [C - Functions](https://intranet.alxswe.com/rltoken/Vg1zzzrxLhPh71405uggSg)
* [Learning to Program in C (Part 06)](https://intranet.alxswe.com/rltoken/jveXtnJII2S0z7a06c7-JA)
* [What is the purpose of a function prototype?](https://intranet.alxswe.com/rltoken/XZ--UJZO76ZoUWNA9bTmbg)
* [C - Header Files](https://intranet.alxswe.com/rltoken/AS8JW4ObD5gmyX2mgtqV0A)
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

## 0. _putchar

- Write a program that prints _putchar, followed by a new line.
### Requirements:

The program should return <code>0</code>

Mode: mandatory

File: [0-putchar.c](./0-putchar.c)
<hr>

## 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

- Write a function that prints the alphabet, in lowercase, followed by a new line.
### Requirements:

Prototype: <code>void print_alphabet(void);</code>
You can only use <code>_putchar</code> twice in your code

Mode: mandatory

File: [1-alphabet.c](./1-alphabet.c)
<hr>

## 2. 10 x alphabet

- Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
### Requirements:

Prototype: <code>void print_alphabet_x10(void);</code>
You can only use <code>_putchar</code> twice in your code

Mode: mandatory

File: [2-print_alphabet_x10.c](./2-print_alphabet_x10.c)
<hr>

## 3. islower

- Write a function that checks for lowercase character.
### Requirements:

Prototype: <code>int _islower(int c);</code>
Returns <code>1</code> if <code>c</code> is lowercase
Returns <code>0</code> otherwise

Mode: mandatory

File: [3-islower.c](./3-islower.c)
<hr>

## 4. isalpha

- Write a function that checks for alphabetic character.
### Requirements:

Prototype: <code>int _isalpha(int c);</code>
Returns <code>1</code> if <code>c</code> is a letter, lowercase or uppercase
Returns <code>0</code> otherwise

Mode: mandatory

File: [4-isalpha.c](./4-isalpha.c)
<hr>

## 5. Sign

- Write a function that prints the sign of a number.
### Requirements:

Prototype: <code>int print_sign(int n);</code>
Returns <code>1</code> and prints <code>+</code> if <code>n</code> is greater than zero
Returns <code>0</code> and prints <code>0</code> if <code>n</code> is zero
Returns <code>-1</code> and prints <code>-</code> if <code>n</code> is less than zero

Mode: mandatory

File: [5-sign.c](./5-sign.c)
<hr>

## 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you

- Write a function that computes the absolute value of an integer.
### Requirements:

Prototype: <code>int _abs(int);</code>

Mode: mandatory

File: [6-abs.c](./6-abs.c)
<hr>

## 7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important

- Write a function that prints the last digit of a number.
### Requirements:

Prototype: <code>int print_last_digit(int);</code>
Returns the value of the last digit

Mode: mandatory

File: [7-print_last_digit.c](./7-print_last_digit.c)
<hr>

## 8. I'm federal agent Jack Bauer, and today is the longest day of my life

- Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
### Requirements:

Prototype: <code>void jack_bauer(void);</code>
You can listen to <a href="/rltoken/aNwRcWg7MPM1J2lYuuuBjA" title="this soundtrack" target="_blank">this soundtrack</a> while coding :)

Mode: mandatory

File: [8-24_hours.c](./8-24_hours.c)
<hr>

## 9. Learn your times table

- Write a function that prints the 9 times table, starting with 0.
### Requirements:

Prototype: <code>void times_table(void);</code>
Format: see example

Mode: mandatory

File: [9-times_table.c](./9-times_table.c)
<hr>

## 10. a + b

- Write a function that adds two integers and returns the result.
### Requirements:

Prototype: <code>int add(int, int);</code>

Mode: mandatory

File: [10-add.c](./10-add.c)
<hr>

## 11. 98 Battery Street, the OG

- Write a function that prints all natural numbers from n to 98, followed by a new line.
### Requirements:

Prototype: <code>void print_to_98(int n);</code>
Numbers must be separated by a comma, followed by a space
Numbers should be printed in order
The first printed number should be the number passed to your function
The last printed number should be <code>98</code>
You are allowed to use the standard library

Mode: mandatory

File: [11-print_to_98.c](./11-print_to_98.c)
<hr>

## 12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself

- Write a function that prints the n times table, starting with 0.
### Requirements:

Prototype: <code>void print_times_table(int n);</code>
If <code>n</code> is greater than <code>15</code> or less than <code>0</code> the function should not print anything
Format: see example

Mode: #advanced

File: [100-times_table.c](./100-times_table.c)
<hr>

## 13. Nature made the natural numbers; All else is the work of women

- If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
### Requirements:

You are allowed to use the standard library

Mode: #advanced

File: [101-natural.c](./101-natural.c)
<hr>

## 14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A

- Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
### Requirements:

The numbers must be separated by comma, followed by a space <code>,&nbsp;</code>
You are allowed to use the standard library

Mode: #advanced

File: [102-fibonacci.c](./102-fibonacci.c)
<hr>

## 15. Even Liber Abbaci

- Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.
### Requirements:

You are allowed to use the standard library

Mode: #advanced

File: [103-fibonacci.c](./103-fibonacci.c)
<hr>

## 16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+

- Write a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
### Requirements:

The numbers should be separated by comma, followed by a space  <code>,</code>
You are allowed to use the standard library
You are not allowed to use any other library (You can’t use <code>GMP</code> etc…)
You are not allowed to use <code>long long</code>, <code>malloc</code>, pointers, arrays/tables, or structures
You are not allowed to hard code any Fibonacci number (except for <code>1</code> and <code>2</code>)

Mode: #advanced

File: [104-fibonacci.c](./104-fibonacci.c)
