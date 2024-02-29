# 0x07. C - Even more pointers, arrays and strings

## Resources

#### Read or watch:

* [C - Pointer to Pointer](https://intranet.alxswe.com/rltoken/eyikXPg7ZxCAEuWklB6xtQ)
* [C – Pointer to Pointer with example](https://intranet.alxswe.com/rltoken/ojr7OUUm2I-MULE4lWlrkg)
* [Multi-dimensional Arrays in C](https://intranet.alxswe.com/rltoken/HUZIJ6t55KM7d7FBCwWm8Q)
* [Two dimensional (2D) arrays in C programming with example](https://intranet.alxswe.com/rltoken/Dx9nIBRj68sRBGe2NRI_aQ)
## Learning Objectives

### General

* What are pointers to pointers and how to use them
* What are multidimensional arrays and how to use them
* What are the most common C standard library functions to manipulate strings
## Tasks

## 0. memset

- Write a function that fills memory with a constant byte.
### Requirements:

Prototype: <code>char *_memset(char *s, char b, unsigned int n);</code>
The <code>_memset()</code> function fills the first <code>n</code> bytes of the memory area pointed to by <code>s</code> with the constant byte <code>b</code>
Returns a pointer to the memory area <code>s</code>

Mode: mandatory

File: [0-memset.c](./0-memset.c)
<hr>

## 1. memcpy

- Write a function that copies memory area.
### Requirements:

Prototype: <code>char *_memcpy(char *dest, char *src, unsigned int n);</code>
The <code>_memcpy()</code>  function  copies <code>n</code> bytes from memory area <code>src</code> to memory area <code>dest</code>
Returns a pointer to <code>dest</code>

Mode: mandatory

File: [1-memcpy.c](./1-memcpy.c)
<hr>

## 2. strchr

- Write a function that locates a character in a string.
### Requirements:

Prototype: <code>char *_strchr(char *s, char c);</code>
Returns a pointer to the first occurrence of the character <code>c</code> in the string <code>s</code>, or <code>NULL</code> if the character is not  found

Mode: mandatory

File: [2-strchr.c](./2-strchr.c)
<hr>

## 3. strspn

- Write a function that gets the length of a prefix substring.
### Requirements:

Prototype: <code>unsigned int _strspn(char *s, char *accept);</code>
Returns the number of bytes in the initial segment of <code>s</code> which consist only of bytes from <code>accept</code>

Mode: mandatory

File: [3-strspn.c](./3-strspn.c)
<hr>

## 4. strpbrk

- Write a function that searches a string for any of a set of bytes.
### Requirements:

Prototype: <code>char *_strpbrk(char *s, char *accept);</code>
The <code>_strpbrk()</code>  function locates the first occurrence in the string <code>s</code> of any of the bytes in the string <code>accept</code>
Returns a pointer to the byte in <code>s</code> that matches one of the bytes in <code>accept</code>,  or <code>NULL</code> if no such byte is found

Mode: mandatory

File: [4-strpbrk.c](./4-strpbrk.c)
<hr>

## 5. strstr

- Write a function that locates a substring.
### Requirements:

Prototype: <code>char *_strstr(char *haystack, char *needle);</code>
The <code>_strstr()</code> function finds the first occurrence of the substring <code>needle</code> in the string <code>haystack</code>.  The terminating null bytes (<code>\0</code>) are not compared
Returns a pointer to the beginning of the located substring, or <code>NULL</code> if the substring is not found.

Mode: mandatory

File: [5-strstr.c](./5-strstr.c)
<hr>

## 6. Chess is mental torture

- Write a function that prints the chessboard.
### Requirements:

Prototype: <code>void print_chessboard(char (*a)[8]);</code>

Mode: mandatory

File: [7-print_chessboard.c](./7-print_chessboard.c)
<hr>

## 7. The line of life is a ragged diagonal between duty and desire

- Write a function that prints the sum of the two diagonals of a square matrix of integers.
### Requirements:

Prototype: <code>void print_diagsums(int *a, int size);</code>
Format: see example
You are allowed to use the standard library

Mode: mandatory

File: [8-print_diagsums.c](./8-print_diagsums.c)
<hr>

## 8. Double pointer, double fun

- Write a function that sets the value of a pointer to a char.
### Requirements:

Prototype: <code>void set_string(char **s, char *to);</code>

Mode: #advanced

File: [100-set_string.c](./100-set_string.c)
<hr>

## 9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure

- Create a file that contains the password for the crackme2 executable.
### Requirements:

Your file should contain the exact password, no new line, no extra space
<code>ltrace</code>, <code>ldd</code>, <code>gdb</code> and <code>objdump</code> can help
You may need to install the <code>openssl</code> library to run the <code>crakme2</code> program: <code>sudo apt install libssl-dev</code>
Edit the source list <code>sudo nano /etc/apt/sources.list</code> to add the following line: <code>deb http://security.ubuntu.com/ubuntu xenial-security main</code>
Then <code>sudo apt update</code> and <code>sudo apt install libssl1.0.0</code>

Mode: #advanced

File: [101-crackme_password](./101-crackme_password)
