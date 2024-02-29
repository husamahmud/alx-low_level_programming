# 0x17. C - Doubly linked lists

## Resources

#### Read or watch:

* [What is a Doubly Linked List](https://intranet.alxswe.com/rltoken/C5_IRM981SVn8oA8RP3gag)
## Learning Objectives

### General

* What is a doubly linked list
* How to use doubly linked lists
* Understand and know how to implement the various operations (deletion, insertion, etc) with doubly linked lists
* Start to look for the right source of information without too much help
## Tasks

## 0. Print list

- Write a function that prints all the elements of a dlistint_t list.
### Requirements:

Prototype: <code>size_t print_dlistint(const dlistint_t *h);</code>
Return: the number of nodes
Format: see example

Mode: mandatory

File: [0-print_dlistint.c](./0-print_dlistint.c)
<hr>

## 1. List length

- Write a function that returns the number of elements in a linked dlistint_t list.
### Requirements:

Prototype: <code>size_t dlistint_len(const dlistint_t *h);</code>

Mode: mandatory

File: [1-dlistint_len.c](./1-dlistint_len.c)
<hr>

## 2. Add node

- Write a function that adds a new node at the beginning of a dlistint_t list.
### Requirements:

Prototype: <code>dlistint_t *add_dnodeint(dlistint_t **head, const int n);</code>
Return: the address of the new element, or <code>NULL</code> if it failed

Mode: mandatory

File: [2-add_dnodeint.c](./2-add_dnodeint.c)
<hr>

## 3. Add node at the end

- Write a function that adds a new node at the end of a dlistint_t list.
### Requirements:

Prototype: <code>dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);</code>
Return: the address of the new element, or <code>NULL</code> if it failed

Mode: mandatory

File: [3-add_dnodeint_end.c](./3-add_dnodeint_end.c)
<hr>

## 4. Free list

- Write a function that frees a dlistint_t list.
### Requirements:

Prototype: <code>void free_dlistint(dlistint_t *head);</code>

Mode: mandatory

File: [4-free_dlistint.c](./4-free_dlistint.c)
<hr>

## 5. Get node at index

- Write a function that returns the nth node of a dlistint_t linked list.
### Requirements:

Prototype: <code>dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);</code>
where <code>index</code> is the index of the node, starting from <code>0</code>
if the node does not exist, return <code>NULL</code>

Mode: mandatory

File: [5-get_dnodeint.c](./5-get_dnodeint.c)
<hr>

## 6. Sum list

- Write a function that returns the sum of all the data (n) of a dlistint_t linked list.
### Requirements:

Prototype: <code>int sum_dlistint(dlistint_t *head);</code>
if the list is empty, return <code>0</code>

Mode: mandatory

File: [6-sum_dlistint.c](./6-sum_dlistint.c)
<hr>

## 7. Insert at index

- Write a function that inserts a new node at a given position.
### Requirements:

Prototype: <code>dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);</code>
where <code>idx</code> is the index of the list where the new node should be added. Index starts at <code>0</code>
Returns: the address of the new node, or <code>NULL</code> if it failed
if it is not possible to add the new node at index <code>idx</code>, do not add the new node and return <code>NULL</code>

Mode: mandatory

File: [7-insert_dnodeint.c](./7-insert_dnodeint.c), [2-add_dnodeint.c](./2-add_dnodeint.c), [3-add_dnodeint_end.c](./3-add_dnodeint_end.c)
<hr>

## 8. Delete at index

- Write a function that deletes the node at index index of a dlistint_t linked list.
### Requirements:

Prototype: <code>int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);</code>
where <code>index</code> is the index of the node that should be deleted. Index starts at <code>0</code>
Returns: <code>1</code> if it succeeded, <code>-1</code> if it failed

Mode: mandatory

File: [8-delete_dnodeint.c](./8-delete_dnodeint.c)
<hr>

## 9. Crackme4

- Find the password for crackme4.
### Requirements:

Save the password in the file <code>100-password</code>
Your file should contain the exact password, no new line, no extra space
Hint: The program prints “OK” when the password is correct

Mode: #advanced

File: [100-password](./100-password)
<hr>

## 10. Palindromes

- A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
### Requirements:

Save the result in the file <code>102-result</code>
Your file should contain the exact result, no new line, no extra space

Mode: #advanced

File: [102-result](./102-result)
<hr>

## 11. crackme5

- Write a keygen for crackme5.
### Requirements:

Usage of the crackme: <code>./crackme5 username key</code>
The crackme will segfault if you do not enter the correct key for the user
Usage for your keygen: <code>./keygen5 username</code>
Your keygen should print a valid key for the <code>username</code>

Mode: #advanced

File: [103-keygen.c](./103-keygen.c)
<hr>
