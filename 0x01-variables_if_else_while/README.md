# 0x01. C - Variables, if, else, while

## Resources

#### Read or watch:

* [Everything you need to know to start with C.pdf](https://intranet.alxswe.com/rltoken/PkAydT3D9u5pN3nPCAlNZQ)
* [Keywords and identifiers](https://intranet.alxswe.com/rltoken/58ThnAAxwJv5s_ceKMMPhw)
* [integers](https://intranet.alxswe.com/rltoken/2sXkmDiD7BF7pNIOxMQWFA)
* [Arithmetic Operators in C](https://intranet.alxswe.com/rltoken/S-b9MN2iELhSEwCI093Vzw)
* [If statements in C](https://intranet.alxswe.com/rltoken/usvxrTB3ko5kGTq48p5fSA)
* [if...else statement](https://intranet.alxswe.com/rltoken/CU6mSX1qdZKOhDEgmToUGA)
* [Relational operators](https://intranet.alxswe.com/rltoken/O1N-qacaTC-BHXm3Dp3eUA)
* [Logical operators](https://intranet.alxswe.com/rltoken/TaX_y6ll4cRfxCrxG8ZuNQ)
* [while loop in C](https://intranet.alxswe.com/rltoken/mwx2_bj3gIFEgCqdwdTp4w)
* [While loop](https://intranet.alxswe.com/rltoken/MW4Ob-6JLWt7Zn6vZ0EsBw)
## Learning Objectives

### General

* What are the arithmetic operators and how to use them
* What are the logical operators (sometimes called boolean operators) and how to use them
* What the the relational operators and how to use them
* What values are considered TRUE and FALSE in C
* What are the boolean operators and how to use them
* How to use the if, if ... else statements
* How to use comments
* How to declare variables of types char, int, unsigned int
* How to assign values to variables
* How to print the values of variables of type char, int, unsigned int with printf
* How to use the while loop
* How to use variables with the while loop
* How to print variables using printf
* What is the ASCII character set
* What are the purpose of the gcc flags -m32 and -m64
## Tasks

## 0. Positive anything is better than negative nothing

- This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.
### Requirements:

You can find the source code <a href="/rltoken/Dg4SuuP8gvRYnE54wktySg" title="here" target="_blank">here</a>
The variable <code>n</code> will store a different value every time you will run this program
You don’t have to understand what <code>rand</code>, <code>srand</code>, <code>RAND_MAX</code> do. Please do not touch this code
The output of the program should be:


The number, followed by


if the number is greater than 0: is positive
if the number is 0: is zero
if the number is less than 0: is negative

followed by a new line

The number, followed by


if the number is greater than 0: is positive
if the number is 0: is zero
if the number is less than 0: is negative

if the number is greater than 0: <code>is positive</code>
if the number is 0: <code>is zero</code>
if the number is less than 0: <code>is negative</code>
followed by a new line

Mode: mandatory

File: [0-positive_or_negative.c](./0-positive_or_negative.c)
<hr>

## 1. The last digit

- This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.
### Requirements:

You can find the source code <a href="/rltoken/rud8wr5x6VWeahUtd5P14A" title="here" target="_blank">here</a>
The variable <code>n</code> will store a different value every time you run this program
You don’t have to understand what <code>rand</code>, <code>srand</code>, and <code>RAND_MAX</code> do. Please do not touch this code
The output of the program should be:


The string Last digit of, followed by
n, followed by
the string is, followed by


if the last digit of n is greater than 5: the string and is greater than 5
if the last digit of n is 0: the string and is 0
if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0

followed by a new line

The string <code>Last digit of</code>, followed by
<code>n</code>, followed by
the string is, followed by


if the last digit of n is greater than 5: the string and is greater than 5
if the last digit of n is 0: the string and is 0
if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0

if the last digit of <code>n</code> is greater than 5: the string <code>and is greater than 5</code>
if the last digit of <code>n</code> is 0: the string <code>and is 0</code>
if the last digit of <code>n</code> is less than 6 and not 0: the string <code>and is less than 6 and not 0</code>
followed by a new line

Mode: mandatory

File: [1-last_digit.c](./1-last_digit.c)
<hr>

## 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

- Write a program that prints the alphabet in lowercase, followed by a new line.
### Requirements:

You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)
All your code should be in the <code>main</code> function
You can only use <code>putchar</code> twice in your code

Mode: mandatory

File: [2-print_alphabet.c](./2-print_alphabet.c)
<hr>

## 3. alphABET

- Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
### Requirements:

You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)
All your code should be in the <code>main</code> function
You can only use <code>putchar</code> three times in your code

Mode: mandatory

File: [3-print_alphabets.c](./3-print_alphabets.c)
<hr>

## 4. When I was having that alphabet soup, I never thought that it would pay off

- Write a program that prints the alphabet in lowercase, followed by a new line.
### Requirements:

Print all the letters except <code>q</code> and <code>e</code>
You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)
All your code should be in the <code>main</code> function
You can only use <code>putchar</code> twice in your code

Mode: mandatory

File: [4-print_alphabt.c](./4-print_alphabt.c)
<hr>

## 5. Numbers

- Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
### Requirements:

All your code should be in the <code>main</code> function

Mode: mandatory

File: [5-print_numbers.c](./5-print_numbers.c)
<hr>

## 6. Numberz

- Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
### Requirements:

You are not allowed to use any variable of type <code>char</code>
You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)
You can only use <code>putchar</code> twice in your code
All your code should be in the <code>main</code> function

Mode: mandatory

File: [6-print_numberz.c](./6-print_numberz.c)
<hr>

## 7. Smile in the mirror

- Write a program that prints the lowercase alphabet in reverse, followed by a new line.
### Requirements:

You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)
All your code should be in the <code>main</code> function
You can only use <code>putchar</code> twice in your code

Mode: mandatory

File: [7-print_tebahpla.c](./7-print_tebahpla.c)
<hr>

## 8. Hexadecimal

- Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
### Requirements:

You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)
All your code should be in the <code>main</code> function
You can only use <code>putchar</code> three times in your code

Mode: mandatory

File: [8-print_base16.c](./8-print_base16.c)
<hr>

## 9. Patience, persistence and perspiration make an unbeatable combination for success

- Write a program that prints all possible combinations of single-digit numbers.
### Requirements:

Numbers must be separated by <code>,</code>, followed by a space
Numbers should be printed in ascending order
You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)
All your code should be in the <code>main</code> function
You can only use <code>putchar</code> four times maximum in your code
You are not allowed to use any variable of type <code>char</code>

Mode: mandatory

File: [9-print_comb.c](./9-print_comb.c)
<hr>

## 10. Inventing is a combination of brains and materials. The more brains you use, the less material you need

- Write a program that prints all possible different combinations of two digits.
### Requirements:

Numbers must be separated by <code>,</code>, followed by a space
The two digits must be different
<code>01</code> and <code>10</code> are considered the same combination of the two digits <code>0</code> and <code>1</code>
Print only the smallest combination of two digits
Numbers should be printed in ascending order, with two digits
You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)
You can only use <code>putchar</code> five times maximum in your code
You are not allowed to use any variable of type <code>char</code>
All your code should be in the <code>main</code> function

Mode: #advanced

File: [100-print_comb3.c](./100-print_comb3.c)
<hr>

## 11. The success combination in business is: Do what you do better... and: do more of what you do...

- Write a program that prints all possible different combinations of three digits.
### Requirements:

Numbers must be separated by <code>,</code>, followed by a space
The three digits must be different
<code>012</code>, <code>120</code>, <code>102</code>, <code>021</code>, <code>201</code>, <code>210</code> are considered the same combination of the three digits <code>0</code>, <code>1</code> and <code>2</code>
Print only the smallest combination of three digits
Numbers should be printed in ascending order, with three digits
You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)
You can only use <code>putchar</code> six times maximum in your code
You are not allowed to use any variable of type <code>char</code>
All your code should be in the <code>main</code> function

Mode: #advanced

File: [101-print_comb4.c](./101-print_comb4.c)
<hr>

## 12. Software is eating the World

- Write a program that prints all possible combinations of two two-digit numbers.
### Requirements:

The numbers should range from <code>0</code> to <code>99</code>
The two numbers should be separated by a space
All numbers should be printed with two digits. <code>1</code> should be printed as <code>01</code>
The combination of numbers must be separated by comma, followed by a space
The combinations of numbers should be printed in ascending order
<code>00 01</code> and <code>01 00</code> are considered as the same combination of the numbers <code>0</code> and <code>1</code>
You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)
You can only use <code>putchar</code> eight times maximum in your code
You are not allowed to use any variable of type <code>char</code>
All your code should be in the <code>main</code> function

Mode: #advanced

File: [102-print_comb5.c](./102-print_comb5.c)
