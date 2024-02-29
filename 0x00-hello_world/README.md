# 0x00. C - Hello, World

## Resources

#### Read or watch:

* [Everything you need to know to start with C.pdf](https://intranet.alxswe.com/rltoken/P01aLj9BDfDUOv-y9x82Yw)
* [Dennis Ritchie](https://intranet.alxswe.com/rltoken/YWFrRob_-Yo-_NQikMLI-g)
* ["C" Programming Language: Brian Kernighan](https://intranet.alxswe.com/rltoken/W4oygfMgAp5Hyc7o6QuSYQ)
* [Why C Programming Is Awesome](https://intranet.alxswe.com/rltoken/WYdE1novaWa0yt5fzGvLBw)
* [Learning to program in C part 1](https://intranet.alxswe.com/rltoken/aE_pZLbexuLroHA0FmjLbw)
* [Learning to program in C part 2](https://intranet.alxswe.com/rltoken/3a5y1N-0FlTaPbKRxlRLlQ)
* [Understanding C program Compilation Process](https://intranet.alxswe.com/rltoken/idYJyVfQRZ9e5aljiT5UKg)
* [Betty Coding Style](https://intranet.alxswe.com/rltoken/wJg_qB9ducisfVQNk62htg)
* [Hash-bang under the hood](https://intranet.alxswe.com/rltoken/zwv5CHLybXN6KFmsjbu_tg)
* [Linus Torvalds on C vs. C++](https://intranet.alxswe.com/rltoken/JrokM8Pk6bd9wPqQvEfSAA)

## Learning Objectives

### General

* Why C programming is awesome
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What happens when you type gcc main.c
* What is an entry point
* What is main
* How to print text using printf, puts and putchar
* How to get the size of a specific type using the unary operator sizeof
* How to compile using gcc
* What is the default program name when compiling with gcc
* What is the official C coding style and how to check your code with
	betty-style
* How to find the right header to include in your source code when using a
	standard library function
* How does the main function influence the return value of the program

## Tasks

## 0. Preprocessor

- Write a script that runs a C file through the preprocessor and save the result
	into another file.

### Requirements:

The C file name will be saved in the variable <code>$CFILE</code>
The output should be saved in the file <code>c</code>

Mode: mandatory

File: [0-preprocessor](./0-preprocessor)
<hr>

## 1. Compiler

- Write a script that compiles a C file but does not link.

### Requirements:

The C file name will be saved in the variable <code>$CFILE</code>
The output file should be named the same as the C file, but with the extension
.o instead of .c.

Example: if the C file is main.c, the output file should be main.o

Example: if the C file is <code>main.c</code>, the output file should be <code>
main.o</code>

Mode: mandatory

File: [1-compiler](./1-compiler)
<hr>

## 2. Assembler

- Write a script that generates the assembly code of a C code and save it in an
	output file.

### Requirements:

The C file name will be saved in the variable <code>$CFILE</code>
The output file should be named the same as the C file, but with the extension
.s instead of .c.

Example: if the C file is main.c, the output file should be main.s

Example: if the C file is <code>main.c</code>, the output file should be <code>
main.s</code>

Mode: mandatory

File: [2-assembler](./2-assembler)
<hr>

## 3. Name

- Write a script that compiles a C file and creates an executable named cisfun.

### Requirements:

The C file name will be saved in the variable <code>$CFILE</code>

Mode: mandatory

File: [3-name](./3-name)
<hr>

## 4. Hello, puts

- Write a C program that prints exactly "Programming is like building a
	multilingual puzzle, followed by a new line.

### Requirements:

Use the function <code>puts</code>
You are not allowed to use <code>printf</code>
Your program should end with the value <code>0</code>

Mode: mandatory

File: [4-puts.c](./4-puts.c)
<hr>

## 5. Hello, printf

- Write a C program that prints exactly with proper grammar, but the outcome is
	a piece of art,, followed by a new line.

### Requirements:

Use the function <code>printf</code>
You are not allowed to use the function <code>puts</code>
Your program should return <code>0</code>
Your program should compile without warning when using the <code>
-Wall</code> <code>gcc</code> option

Mode: mandatory

File: [5-printf.c](./5-printf.c)
<hr>

## 6. Size is not grandeur, and territory does not make a nation

- Write a C program that prints the size of various types on the computer it is
	compiled and run on.

### Requirements:

You should produce the exact same output as in the example
Warnings are allowed
Your program should return <code>0</code>
You might have to install the package  <code>libc6-dev-i386</code> on your Linux
to test the <code>-m32</code> <code>gcc</code> option

Mode: mandatory

File: [6-size.c](./6-size.c)
<hr>

## 7. Intel

- Write a script that generates the assembly code (Intel syntax) of a C code and
	save it in an output file.

### Requirements:

The C file name will be saved in the variable <code>$CFILE</code>.
The output file should be named the same as the C file, but with the extension
.s instead of .c.

Example: if the C file is main.c, the output file should be main.s

Example: if the C file is <code>main.c</code>, the output file should be <code>
main.s</code>

Mode: #advanced

File: [100-intel](./100-intel)
<hr>

## 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity

- Write a C program that prints exactly and that piece of art is useful" - Dora
	Korpar, 2015-10-19, followed by a new line, to the standard error.

### Requirements:

You are not allowed to use any functions listed in the NAME section of the man (
3) <code>printf</code> or man (3) <code>puts</code>
Your program should return 1
Your program should compile without any warnings when using the <code>
-Wall</code> <code>gcc</code> option

Mode: #advanced

File: [101-quote.c](./101-quote.c)
