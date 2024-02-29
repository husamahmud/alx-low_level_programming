# 0x06. C - More pointers, arrays and strings

## Resources

#### Read or watch:

## Learning Objectives

### General

* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables
## Tasks

## 0. strcat

- Write a function that concatenates two strings.
### Requirements:

Prototype: <code>char *_strcat(char *dest, char *src);</code>
This function appends the <code>src</code> string to the <code>dest</code> string, overwriting the terminating null byte (<code>\0</code>) at the end of <code>dest</code>, and then adds a terminating null byte
Returns a pointer to the resulting string <code>dest</code>

Mode: mandatory

File: [0-strcat.c](./0-strcat.c)
<hr>

## 1. strncat

- Write a function that concatenates two strings.
### Requirements:

Prototype: <code>char *_strncat(char *dest, char *src, int n);</code>
The _strncat function is similar to the _strcat function, except that


it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes

it will use at most <code>n</code> bytes from <code>src</code>; and
<code>src</code> does not need to be null-terminated if it contains <code>n</code> or more bytes
Return a pointer to the resulting string <code>dest</code>

Mode: mandatory

File: [1-strncat.c](./1-strncat.c)
<hr>

## 2. strncpy

- Write a function that copies a string.
### Requirements:

Prototype: <code>char *_strncpy(char *dest, char *src, int n);</code><br>
Your function should work exactly like <code>strncpy</code>

Mode: mandatory

File: [2-strncpy.c](./2-strncpy.c)
<hr>

## 3. strcmp

- Write a function that compares two strings.
### Requirements:

Prototype: <code>int _strcmp(char *s1, char *s2);</code>
Your function should work exactly like <code>strcmp</code>

Mode: mandatory

File: [3-strcmp.c](./3-strcmp.c)
<hr>

## 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy

- Write a function that reverses the content of an array of integers.
### Requirements:

Prototype: <code>void reverse_array(int *a, int n);</code>
Where <code>n</code> is the number of elements of the array

Mode: mandatory

File: [4-rev_array.c](./4-rev_array.c)
<hr>

## 5. Always look up

- Write a function that changes all lowercase letters of a string to uppercase.
### Requirements:

Prototype: <code>char *string_toupper(char *);</code>

Mode: mandatory

File: [5-string_toupper.c](./5-string_toupper.c)
<hr>

## 6. Expect the best. Prepare for the worst. Capitalize on what comes

- Write a function that capitalizes all words of a string.
### Requirements:

Prototype: <code>char *cap_string(char *);</code>
Separators of words: space, tabulation, new line, <code>,</code>, <code>;</code>, <code>.</code>, <code>!</code>, <code>?</code>, <code>"</code>, <code>(</code>, <code>)</code>, <code>{</code>, and <code>}</code>

Mode: mandatory

File: [6-cap_string.c](./6-cap_string.c)
<hr>

## 7. Mozart composed his music not for the elite, but for everybody

- Write a function that encodes a string into 1337.
### Requirements:

Letters <code>a</code> and <code>A</code> should be replaced by <code>4</code><br>
Letters <code>e</code> and <code>E</code> should be replaced by <code>3</code><br>
Letters <code>o</code> and <code>O</code> should be replaced by <code>0</code><br>
Letters <code>t</code> and <code>T</code> should be replaced by <code>7</code><br>
Letters <code>l</code> and <code>L</code> should be replaced by <code>1</code><br>
Prototype: <code>char *leet(char *);</code>
You can only use one <code>if</code> in your code
You can only use two loops in your code
You are not allowed to use <code>switch</code>
You are not allowed to use any ternary operation

Mode: mandatory

File: [7-leet.c](./7-leet.c)
<hr>

## 8. rot13

- Write a function that encodes a string using rot13.
### Requirements:

Prototype: <code>char *rot13(char *);</code><br>
You can only use <code>if</code> statement once in your code
You can only use two loops in your code
You are not allowed to use <code>switch</code>
You are not allowed to use any ternary operation

Mode: #advanced

File: [100-rot13.c](./100-rot13.c)
<hr>

## 9. Numbers have life; they're not just symbols on paper

- Write a function that prints an integer.
### Requirements:

Prototype: <code>void print_number(int n);</code>
You can only use <code>_putchar</code> function to print
You are not allowed to use <code>long</code>
You are not allowed to use arrays or pointers
You are not allowed to hard-code special values

Mode: #advanced

File: [101-print_number.c](./101-print_number.c)
<hr>

## 10. A dream doesn't become reality through magic; it takes sweat, determination and hard work

-

Add one line to this code, so that the program prints a[2] = 98, followed by a new line.
### Requirements:

You are not allowed to use the variable <code>a</code> in your new line of code
You are not allowed to modify the variable <code>p</code>
You can only write one statement
You are not allowed to use <code>,</code>
You are not allowed to code anything else than the line of expected line of code at the expected line
Your code should be written at line 19, before the <code>;</code>
Do not remove anything from the initial code (not even the comments)
and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)
You are allowed to use the standard library

Mode: #advanced

File: [102-magic.c](./102-magic.c)
<hr>

## 11. It is the addition of strangeness to beauty that constitutes the romantic character in art

- Write a function that adds two numbers.
### Requirements:

Prototype: <code>char *infinite_add(char *n1, char *n2, char *r, int size_r);</code><br>
Where <code>n1</code> and <code>n2</code> are the two numbers
<code>r</code> is the buffer that the function will use to store the result
<code>size_r</code> is the buffer size
The function returns a pointer to the result
You can assume that you will always get positive numbers, or <code>0</code>
You can assume that there will be only digits in the strings <code>n1</code> and <code>n2</code>
<code>n1</code> and <code>n2</code> will never be empty
If the result can not be stored in <code>r</code> the function must return <code>0</code>

Mode: #advanced

File: [103-infinite_add.c](./103-infinite_add.c)
<hr>

## 12. Noise is a buffer, more effective than cubicles or booth walls

- Write a function that prints a buffer.
### Requirements:

Prototype: <code>void print_buffer(char *b, int size);</code><br>
The function must print the content of <code>size</code> bytes of the buffer pointed by <code>b</code><br>
The output should print 10 bytes per line
Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with <code>0</code>
Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
Each line shows the content of the buffer.  If the byte is a printable character, print the letter, if not, print <code>.</code>
Each line ends with a new line <code>\n</code>
If <code>size</code> is 0 or less, the output should be a new line only <code>\n</code>
You are allowed to use the standard library
The output should look like the following example, and formatted exactly the same way:

Mode: #advanced

File: [104-print_buffer.c](./104-print_buffer.c)
