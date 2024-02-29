# 0x0B. C - malloc, free

## Resources

#### Read or watch:

* [0x0a - malloc & free - quick overview.pdf](https://intranet.alxswe.com/rltoken/7q6RmWq86XkUhvmlhrg9bg)
* [Dynamic memory allocation in C - malloc calloc realloc free](https://intranet.alxswe.com/rltoken/pfGb2oVIYLO_1a8jtFGQYw)
## Learning Objectives

### General

* What is the difference between automatic and dynamic allocation
* What is malloc and free and how to use them
* Why and when use malloc
* How to use valgrind to check for memory leak
## Tasks

## 0. Float like a butterfly, sting like a bee

- Write a function that creates an array of chars, and initializes it with a specific char.
### Requirements:

Prototype: <code>char *create_array(unsigned int size, char c);</code>
Returns <code>NULL</code> if size = <code>0</code>
Returns a pointer to the array, or <code>NULL</code> if it fails

Mode: mandatory

File: [0-create_array.c](./0-create_array.c)
<hr>

## 1. The woman who has no imagination has no wings

- Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
### Requirements:

Prototype: <code>char *_strdup(char *str);</code>
The <code>_strdup()</code> function returns a pointer to a new string which is a duplicate of the string <code>str</code>.  Memory for the new string is obtained with <code>malloc</code>, and can be freed with <code>free</code>.
Returns <code>NULL</code> if str = NULL
On success, the <code>_strdup</code> function returns a pointer to the duplicated string.  It returns <code>NULL</code> if insufficient memory was available

Mode: mandatory

File: [1-strdup.c](./1-strdup.c)
<hr>

## 2. He who is not courageous enough to take risks will accomplish nothing in life

- Write a function that concatenates two strings.
### Requirements:

Prototype: <code>char *str_concat(char *s1, char *s2);</code>
The returned pointer should point to a newly allocated space in memory which contains the contents of <code>s1</code>, followed by the contents of <code>s2</code>, and null terminated
if <code>NULL</code> is passed, treat it as an empty string
The function should return <code>NULL</code> on failure

Mode: mandatory

File: [2-str_concat.c](./2-str_concat.c)
<hr>

## 3. If you even dream of beating me you'd better wake up and apologize

- Write a function that returns a pointer to a 2 dimensional array of integers.
### Requirements:

Prototype: <code>int **alloc_grid(int width, int height);</code>
Each element of the grid should be initialized to <code>0</code>
The function should return <code>NULL</code> on failure
If <code>width</code> or <code>height</code> is <code>0</code> or negative, return <code>NULL</code>

Mode: mandatory

File: [3-alloc_grid.c](./3-alloc_grid.c)
<hr>

## 4. It's not bragging if you can back it up

- Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.
### Requirements:

Prototype: <code>void free_grid(int **grid, int height);</code>
Note that we will compile with your <code>alloc_grid.c</code> file. Make sure it compiles.

Mode: mandatory

File: [4-free_grid.c](./4-free_grid.c)
<hr>

## 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe

- Write a function that concatenates all the arguments of your program.
### Requirements:

Prototype: <code>char *argstostr(int ac, char **av);</code>
Returns <code>NULL</code> if <code>ac == 0</code> or <code>av == NULL</code>
Returns a pointer to a new string, or <code>NULL</code> if it fails
Each argument should be followed by a <code>\n</code> in the new string

Mode: #advanced

File: [100-argstostr.c](./100-argstostr.c)
<hr>

## 6. I will show you how great I am

- Write a function that splits a string into words.
### Requirements:

Prototype: <code>char **strtow(char *str);</code>
The function returns a pointer to an array of strings (words)
Each element of this array should contain a single word, null-terminated
The last element of the returned array should be <code>NULL</code>
Words are separated by spaces
Returns <code>NULL</code> if <code>str == NULL</code> or <code>str == ""</code>
If your function fails, it should return <code>NULL</code>

Mode: #advanced

File: [101-strtow.c](./101-strtow.c)
