# 0x13. C - More singly linked lists

## Resources

#### Read or watch:

* [Google](https://intranet.alxswe.com/rltoken/2-7-eVuWcPutbXf6YZZgiA)
* [Youtube](https://intranet.alxswe.com/rltoken/wVWwl86ufLMsXeAigpxllg)
## Learning Objectives

### General

* How to use linked lists
* Start to look for the right source of information without too much help
## Tasks

## 0. Print list

- Write a function that prints all the elements of a listint_t list.
### Requirements:

Prototype: <code>size_t print_listint(const listint_t *h);</code>
Return: the number of nodes
Format: see example
You are allowed to use <code>printf</code>

Mode: mandatory

File: [0-print_listint.c](./0-print_listint.c)
<hr>

## 1. List length

- Write a function that returns the number of elements in a linked listint_t list.
### Requirements:

Prototype: <code>size_t listint_len(const listint_t *h);</code>

Mode: mandatory

File: [1-listint_len.c](./1-listint_len.c)
<hr>

## 2. Add node

- Write a function that adds a new node at the beginning of a listint_t list.
### Requirements:

Prototype: <code>listint_t *add_nodeint(listint_t **head, const int n);</code>
Return: the address of the new element, or <code>NULL</code> if it failed

Mode: mandatory

File: [2-add_nodeint.c](./2-add_nodeint.c)
<hr>

## 3. Add node at the end

- Write a function that adds a new node at the end of a listint_t list.
### Requirements:

Prototype: <code>listint_t *add_nodeint_end(listint_t **head, const int n);</code>
Return: the address of the new element, or <code>NULL</code> if it failed

Mode: mandatory

File: [3-add_nodeint_end.c](./3-add_nodeint_end.c)
<hr>

## 4. Free list

- Write a function that frees a listint_t list.
### Requirements:

Prototype: <code>void free_listint(listint_t *head);</code>

Mode: mandatory

File: [4-free_listint.c](./4-free_listint.c)
<hr>

## 5. Free

- Write a function that frees a listint_t list.
### Requirements:

Prototype: <code>void free_listint2(listint_t **head);</code>
The function sets the <code>head</code> to <code>NULL</code>

Mode: mandatory

File: [5-free_listint2.c](./5-free_listint2.c)
<hr>

## 6. Pop

- Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
### Requirements:

Prototype: <code>int pop_listint(listint_t **head);</code>
if the linked list is empty return <code>0</code>

Mode: mandatory

File: [6-pop_listint.c](./6-pop_listint.c)
<hr>

## 7. Get node at index

- Write a function that returns the nth node of a listint_t linked list.
### Requirements:

Prototype: <code>listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);</code>
where <code>index</code> is the index of the node, starting at <code>0</code>
if the node does not exist, return <code>NULL</code>

Mode: mandatory

File: [7-get_nodeint.c](./7-get_nodeint.c)
<hr>

## 8. Sum list

- Write a function that returns the sum of all the data (n) of a listint_t linked list.
### Requirements:

Prototype: <code>int sum_listint(listint_t *head);</code>
if the list is empty, return <code>0</code>

Mode: mandatory

File: [8-sum_listint.c](./8-sum_listint.c)
<hr>

## 9. Insert

- Write a function that inserts a new node at a given position.
### Requirements:

Prototype: <code>listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);</code>
where <code>idx</code> is the index of the list where the new node should be added. Index starts at <code>0</code>
Returns: the address of the new node, or <code>NULL</code> if it failed
if it is not possible to add the new node at index <code>idx</code>, do not add the new node and return <code>NULL</code>

Mode: mandatory

File: [9-insert_nodeint.c](./9-insert_nodeint.c)
<hr>

## 10. Delete at index

- Write a function that deletes the node at index index of a listint_t linked list.
### Requirements:

Prototype: <code>int delete_nodeint_at_index(listint_t **head, unsigned int index);</code>
where <code>index</code> is the index of the node that should be deleted. Index starts at <code>0</code>
Returns: <code>1</code> if it succeeded, <code>-1</code> if it failed

Mode: mandatory

File: [10-delete_nodeint.c](./10-delete_nodeint.c)
<hr>

## 11. Reverse list

- Write a function that reverses a listint_t linked list.
### Requirements:

Prototype: <code>listint_t *reverse_listint(listint_t **head);</code>
Returns: a pointer to the first node of the reversed list
You are not allowed to use more than <code>1</code> loop.
You are not allowed to use <code>malloc</code>, <code>free</code> or arrays
You can only declare a maximum of two variables in your function

Mode: #advanced

File: [100-reverse_listint.c](./100-reverse_listint.c)
<hr>

## 12. Print (safe version)

- Write a function that prints a listint_t linked list.
### Requirements:

Prototype: <code>size_t print_listint_safe(const listint_t *head);</code>
Returns: the number of nodes in the list
This function can print lists with a loop
You should go through the list only once
If the function fails, exit the program with status <code>98</code>
Output format: see example

Mode: #advanced

File: [101-print_listint_safe.c](./101-print_listint_safe.c)
<hr>

## 13. Free (safe version)

- Write a function that frees a listint_t list.
### Requirements:

Prototype: <code>size_t free_listint_safe(listint_t **h);</code>
This function can free lists with a loop
You should go though the list only once
Returns: the size of the list that was free’d
The function sets the <code>head</code> to <code>NULL</code>

Mode: #advanced

File: [102-free_listint_safe.c](./102-free_listint_safe.c)
<hr>

## 14. Find the loop

- Write a function that finds the loop in a linked list.
### Requirements:

Prototype: <code>listint_t *find_listint_loop(listint_t *head);</code>
Returns: The address of the node where the loop starts, or <code>NULL</code> if there is no loop
You are not allowed to use <code>malloc</code>, <code>free</code> or arrays
You can only declare a maximum of two variables in your function

Mode: #advanced

File: [103-find_loop.c](./103-find_loop.c)
<hr>
