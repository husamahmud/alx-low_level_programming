# 0x0C. C - More malloc, free

## Resources

#### Read or watch:

* [Do I cast the result of malloc?](https://intranet.alxswe.com/rltoken/3eJCLMz_URoyk6RYRZ2MyA)
## Learning Objectives

### General

* How to use the exit function
* What are the functions calloc and realloc from the standard library and how to use them
## Tasks

## 0. Trust no one

- Write a function that allocates memory using malloc.
### Requirements:

Prototype: <code>void *malloc_checked(unsigned int b);</code>
Returns a pointer to the allocated memory
if <code>malloc</code> fails, the <code>malloc_checked</code> function should cause normal process termination with a status value of <code>98</code>

Mode: mandatory

File: [0-malloc_checked.c](./0-malloc_checked.c)
<hr>

## 1. string_nconcat

- Write a function that concatenates two strings.
### Requirements:

Prototype: <code>char *string_nconcat(char *s1, char *s2, unsigned int n);</code>
The returned pointer shall point to a newly allocated space in memory, which contains <code>s1</code>, followed by the first <code>n</code> bytes of <code>s2</code>, and null terminated
If the function fails, it should return <code>NULL</code>
If <code>n</code> is greater or equal to the length of <code>s2</code> then use the entire string <code>s2</code>
if <code>NULL</code> is passed, treat it as an empty string

Mode: mandatory

File: [1-string_nconcat.c](./1-string_nconcat.c)
<hr>

## 2. _calloc

- Write a function that allocates memory for an array, using malloc.
### Requirements:

Prototype: <code>void *_calloc(unsigned int nmemb, unsigned int size);</code>
The <code>_calloc</code> function allocates memory for an array of <code>nmemb</code> elements of <code>size</code> bytes each and returns a pointer to the allocated memory.
The memory is set to zero
If <code>nmemb</code> or <code>size</code> is <code>0</code>, then <code>_calloc</code> returns <code>NULL</code>
If <code>malloc</code> fails, then <code>_calloc</code> returns <code>NULL</code>

Mode: mandatory

File: [2-calloc.c](./2-calloc.c)
<hr>

## 3. array_range

- Write a function that creates an array of integers.
### Requirements:

Prototype: <code>int *array_range(int min, int max);</code>
The array created should contain all the values from <code>min</code> (included) to <code>max</code> (included), ordered from <code>min</code> to <code>max</code>
Return: the pointer to the newly created array
If <code>min</code> &gt; <code>max</code>, return <code>NULL</code>
If <code>malloc</code> fails, return <code>NULL</code>

Mode: mandatory

File: [3-array_range.c](./3-array_range.c)
<hr>

## 4. _realloc

- Write a function that reallocates a memory block using malloc and free
### Requirements:

Prototype: <code>void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);</code>
where <code>ptr</code> is a pointer to the memory previously allocated with a call to <code>malloc</code>: <code>malloc(old_size)</code>
<code>old_size</code> is the size, in bytes, of the allocated space for <code>ptr</code>
and <code>new_size</code> is the new size, in bytes of the new memory block
The contents will be copied to the newly allocated space, in the range from the start of <code>ptr</code> up to the minimum of the old and new sizes
If <code>new_size</code> &gt; <code>old_size</code>, the “added” memory should not be initialized
If <code>new_size</code> == <code>old_size</code> do not do anything and return <code>ptr</code>
If <code>ptr</code> is <code>NULL</code>, then the call is equivalent to <code>malloc(new_size)</code>, for all values of <code>old_size</code> and <code>new_size</code>
If <code>new_size</code> is equal to zero, and <code>ptr</code> is not <code>NULL</code>, then the call is equivalent to <code>free(ptr)</code>. Return <code>NULL</code>
Don’t forget to free <code>ptr</code> when it makes sense

Mode: #advanced

File: [100-realloc.c](./100-realloc.c)
<hr>

## 5. We must accept finite disappointment, but never lose infinite hope

- Write a program that multiplies two positive numbers.
### Requirements:

Usage: <code>mul num1 num2</code>
<code>num1</code> and <code>num2</code> will be passed in base 10
Print the result, followed by a new line
If the number of arguments is incorrect, print <code>Error</code>, followed by a new line, and exit with a status of <code>98</code>
<code>num1</code> and <code>num2</code> should only be composed of digits. If not, print <code>Error</code>, followed by a new line, and exit with a status of <code>98</code>
You are allowed to use more than 5 functions in your file

Mode: #advanced

File: [101-mul.c](./101-mul.c)
<hr>
