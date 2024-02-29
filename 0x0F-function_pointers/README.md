# 0x0F. C - Function pointers

## Resources

#### Read or watch:

* [Function Pointer in C](https://intranet.alxswe.com/rltoken/yt8Q9jxzT_gyRAvnNkAgkw)
* [Pointers to functions](https://intranet.alxswe.com/rltoken/wP-yWvo9IqbcQsywMmh_iQ)
* [Function Pointers in C / C++](https://intranet.alxswe.com/rltoken/dAN27S1yyBPeBa8RGfvPNA)
* [why pointers to functions?](https://intranet.alxswe.com/rltoken/1vvWpH9Ux8axOLc9jPWcMw)
* [Everything you need to know about pointers in C](https://intranet.alxswe.com/rltoken/G_0lQzs4LAd1e5tKhNMPiw)

## Learning Objectives

### General

* What are function pointers and how to use them
* What does a function pointer exactly hold
* Where does a function pointer point to in the virtual memory

## Tasks

## 0. What's my name

- Write a function that prints a name.

### Requirements:

Prototype: <code>void print_name(char *name, void (*f)(char *));</code>

Mode: mandatory

File: [0-print_name.c](./0-print_name.c)
<hr>

## 1. If you spend too much time thinking about a thing, you'll never get it done

- Write a function that executes a function given as a parameter on each element
	of an array.

### Requirements:

Prototype: <code>void array_iterator(int *array, size_t size, void (*action)(
int));</code>
where <code>size</code> is the size of the array
and <code>action</code> is a pointer to the function you need to use

Mode: mandatory

File: [1-array_iterator.c](./1-array_iterator.c)
<hr>

## 2. To hell with circumstances; I create opportunities

- Write a function that searches for an integer.

### Requirements:

Prototype: <code>int int_index(int *array, int size, int (*cmp)(int));</code>
where <code>size</code> is the number of elements in the array <code>
array</code>
<code>cmp</code> is a pointer to the function to be used to compare values
<code>int_index</code> returns the index of the first element for which
the <code>cmp</code> function does not return <code>0</code>
If no element matches, return <code>-1</code>
If size &lt;= <code>0</code>, return <code>-1</code>

Mode: mandatory

File: [2-int_index.c](./2-int_index.c)
<hr>

## 3. A goal is not always meant to be reached, it often serves simply as something to aim at

- Write a program that performs simple operations.

### Requirements:

You are allowed to use the standard library
Usage: <code>calc num1 operator num2</code>
You can assume <code>num1</code> and <code>num2</code> are integers, so use
the <code>atoi</code> function to convert them from the string input to <code>
int</code>
operator is one of the following:

+: addition
-: subtraction
*: multiplication
/: division
%: modulo

<code>+</code>: addition
<code>-</code>: subtraction
<code>*</code>: multiplication
<code>/</code>: division
<code>%</code>: modulo
The program prints the result of the operation, followed by a new line
You can assume that the result of all operations can be stored in an <code>
int</code>
if the number of arguments is wrong, print <code>Error</code>, followed by a new
line, and exit with the status <code>98</code>
if the <code>operator</code> is none of the above, print <code>Error</code>,
followed by a new line, and exit with the status <code>99</code>
if the user tries to divide (<code>/</code> or <code>%</code>) by <code>
0</code>, print <code>Error</code>, followed by a new line, and exit with the
status <code>100</code>

Mode: mandatory

File: [3-main.c](./3-main.c), [3-op_functions.c](./3-op_functions.c), [3-get_op_func.c](./3-get_op_func.c), [3-calc.h](./3-calc.h)
<hr>

## 4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker

- Write a program that prints the opcodes of its own main function.

### Requirements:

Usage: <code>./main number_of_bytes</code>
Output format:

the opcodes should be printed in hexadecimal, lowercase
each opcode is two char long
listing ends with a new line
see example

the opcodes should be printed in hexadecimal, lowercase
each opcode is two char long
listing ends with a new line
see example
You are allowed to use <code>printf</code> and <code>atoi</code>
You have to use <code>atoi</code> to convert the argument to an <code>int</code>
If the number of argument is not the correct one, print <code>Error</code>,
followed by a new line, and exit with the status <code>1</code>
If the number of bytes is negative, print <code>Error</code>, followed by a new
line, and exit with the status <code>2</code>
You do not have to compile with any flags

Mode: #advanced

File: [100-main_opcodes.c](./100-main_opcodes.c)
<hr>
