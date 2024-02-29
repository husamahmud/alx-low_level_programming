# 0x12. C - Singly linked lists

## Resources

#### Read or watch:

* [Linked Lists](https://intranet.alxswe.com/rltoken/joxg32-tt4lUh8Afgst8tA)
* [Google](https://intranet.alxswe.com/rltoken/USaZbNdfcuIFII-K2YPsKQ)
* [Youtube](https://intranet.alxswe.com/rltoken/epKUCIcoA6XaN1T3Vtr_9w)
## Learning Objectives

### General

* When and why using linked lists vs arrays
* How to build and use linked lists
## Tasks

## 0. Print list

- Write a function that prints all the elements of a list_t list.
### Requirements:

Prototype: <code>size_t print_list(const list_t *h);</code>
Return: the number of nodes
Format: see example
If <code>str</code> is <code>NULL</code>, print <code>[0] (nil)</code>
You are allowed to use <code>printf</code>

Mode: mandatory

File: [0-print_list.c](./0-print_list.c)
<hr>

## 1. List length

- Write a function that returns the number of elements in a linked list_t list.
### Requirements:

Prototype: <code>size_t list_len(const list_t *h);</code>

Mode: mandatory

File: [1-list_len.c](./1-list_len.c)
<hr>

## 2. Add node

- Write a function that adds a new node at the beginning of a list_t list.
### Requirements:

Prototype: <code>list_t *add_node(list_t **head, const char *str);</code>
Return: the address of the new element, or <code>NULL</code> if it failed
<code>str</code> needs to be duplicated
You are allowed to use <code>strdup</code>

Mode: mandatory

File: [2-add_node.c](./2-add_node.c)
<hr>

## 3. Add node at the end

- Write a function that adds a new node at the end of a list_t list.
### Requirements:

Prototype: <code>list_t *add_node_end(list_t **head, const char *str);</code>
Return: the address of the new element, or <code>NULL</code> if it failed
<code>str</code> needs to be duplicated
You are allowed to use <code>strdup</code>

Mode: mandatory

File: [3-add_node_end.c](./3-add_node_end.c)
<hr>

## 4. Free list

- Write a function that frees a list_t list.
### Requirements:

Prototype: <code>void free_list(list_t *head);</code>

Mode: mandatory

File: [4-free_list.c](./4-free_list.c)
<hr>

## 5. The Hare and the Tortoise

-
### Requirements:

You are allowed to use the <code>printf</code> function

Mode: #advanced

File: [100-first.c](./100-first.c)
<hr>

## 6. Real programmers can write assembly code in any language

- Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
### Requirements:

You are only allowed to use the <code>printf</code> function
You are not allowed to use interrupts
Your program will be compiled using <code>nasm</code> and <code>gcc</code>:

Mode: #advanced

File: [101-hello_holberton.asm](./101-hello_holberton.asm)
<hr>
