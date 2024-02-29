# 0x1B. C - Sorting algorithms & Big O

## Resources

#### Read or watch:

* [Sorting algorithm](https://intranet.alxswe.com/rltoken/-j5MKLBlzZAC2RfJ5DTBIg)
* [Big O notation](https://intranet.alxswe.com/rltoken/WRvrE2BaNVQFssHiUATTrw)
* [Sorting algorithms animations](https://intranet.alxswe.com/rltoken/ol0P7NbYVb5R31iOv4Q40A)
* [15 sorting algorithms in 6 minutes](https://intranet.alxswe.com/rltoken/_I0aEvhfJ66Xyob6dd9Utw)
* [CS50 Algorithms explanation in detail by David Malan](https://intranet.alxswe.com/rltoken/Ea93HeEYuNkOL7sGb6zzGg)
* [All about sorting algorithms](https://intranet.alxswe.com/rltoken/21X_eaj5RGcLIL9mZv2sqw)
## Learning Objectives

### General

* At least four different sorting algorithms
* What is the Big O notation, and how to evaluate the time complexity of an algorithm
* How to select the best sorting algorithm for a given input
* What is a stable sorting algorithm
## Tasks

## 0. Bubble sort

-


### Requirements:

Prototype: <code>void bubble_sort(int *array, size_t size);</code>
You’re expected to print the <code>array</code> after each time you swap two elements (See example below)

Mode: mandatory

File: [0-bubble_sort.c](./0-bubble_sort.c), [0-O](./0-O)
<hr>

## 1. Insertion sort

-


### Requirements:

Prototype: <code>void insertion_sort_list(listint_t **list);</code>
You are not allowed to modify the integer <code>n</code> of a node. You have to swap the nodes themselves.
You’re expected to print the <code>list</code> after each time you swap two elements (See example below)

Mode: mandatory

File: [1-insertion_sort_list.c](./1-insertion_sort_list.c), [1-O](./1-O)
<hr>

## 2. Selection sort

-


### Requirements:

Prototype: <code>void selection_sort(int *array, size_t size);</code>
You’re expected to print the <code>array</code> after each time you swap two elements (See example below)

Mode: mandatory

File: [2-selection_sort.c](./2-selection_sort.c), [2-O](./2-O)
<hr>

## 3. Quick sort

-


### Requirements:

Prototype: <code>void quick_sort(int *array, size_t size);</code>
You must implement the <code>Lomuto</code> partition scheme.
The pivot should always be the last element of the partition being sorted.
You’re expected to print the <code>array</code> after each time you swap two elements (See example below)

Mode: mandatory

File: [3-quick_sort.c](./3-quick_sort.c), [3-O](./3-O)
<hr>

## 4. Shell sort - Knuth Sequence

- Write a function that sorts an array of integers in ascending order using the Shell sort algorithm, using the Knuth sequence
### Requirements:

Prototype: <code>void shell_sort(int *array, size_t size);</code>
You must use the following sequence of intervals (a.k.a the Knuth sequence):


n+1 = n * 3 + 1
1, 4, 13, 40, 121, ...

<code>n+1 = n * 3 + 1</code>
<code>1, 4, 13, 40, 121, ...</code>
You’re expected to print the <code>array</code> each time you decrease the interval (See example below).

Mode: #advanced

File: [100-shell_sort.c](./100-shell_sort.c)
<hr>

## 5. Cocktail shaker sort

- Write a function that sorts a doubly linked list of integers in ascending order using the Cocktail shaker sort algorithm
### Requirements:

Prototype: <code>void cocktail_sort_list(listint_t **list);</code>
You are not allowed to modify the integer <code>n</code> of a node. You have to swap the nodes themselves.
You’re expected to print the <code>list</code> after each time you swap two elements (See example below)

Mode: #advanced

File: [101-cocktail_sort_list.c](./101-cocktail_sort_list.c), [101-O](./101-O)
<hr>

## 6. Counting sort

- Write a function that sorts an array of integers in ascending order using the Counting sort algorithm
### Requirements:

Prototype: <code>void counting_sort(int *array, size_t size);</code>
You can assume that <code>array</code> will contain only numbers <code>&gt;= 0</code>
You are allowed to use <code>malloc</code> and <code>free</code> for this task
You’re expected to print your counting array once it is set up (See example below)


This array is of size k + 1 where k is the largest number in array

This array is of size <code>k + 1</code> where <code>k</code> is the largest number in <code>array</code>

Mode: #advanced

File: [102-counting_sort.c](./102-counting_sort.c), [102-O](./102-O)
<hr>

## 7. Merge sort

- Write a function that sorts an array of integers in ascending order using the Merge sort algorithm
### Requirements:

Prototype: <code>void merge_sort(int *array, size_t size);</code>
You must implement the top-down merge sort algorithm


When you divide an array into two sub-arrays, the size of the left array should always be <= the size of the right array. i.e. {1, 2, 3, 4, 5} -> {1, 2}, {3, 4, 5}
Sort the left array before the right array

When you divide an array into two sub-arrays, the size of the left array should always be &lt;= the size of the right array. i.e. <code>{1, 2, 3, 4, 5}</code> -&gt; <code>{1, 2}, {3, 4, 5}</code>
Sort the left array before the right array
You are allowed to use <code>printf</code>
You are allowed to use <code>malloc</code> and <code>free</code> only once (only one <strong>call</strong>)
Output: see example

Mode: #advanced

File: [103-merge_sort.c](./103-merge_sort.c), [103-O](./103-O)
<hr>

## 8. Heap sort

- Write a function that sorts an array of integers in ascending order using the Heap sort algorithm
### Requirements:

Prototype: <code>void heap_sort(int *array, size_t size);</code>
You must implement the <code>sift-down</code> heap sort algorithm
You’re expected to print the <code>array</code> after each time you swap two elements (See example below)

Mode: #advanced

File: [104-heap_sort.c](./104-heap_sort.c), [104-O](./104-O)
<hr>

## 9. Radix sort

- Write a function that sorts an array of integers in ascending order using the Radix sort algorithm
### Requirements:

Prototype: <code>void radix_sort(int *array, size_t size);</code>
You must implement the <code>LSD</code> radix sort algorithm
You can assume that <code>array</code> will contain only numbers <code>&gt;= 0</code>
You are allowed to use <code>malloc</code> and <code>free</code> for this task
You’re expected to print the <code>array</code> each time you increase your <code>significant digit</code> (See example below)

Mode: #advanced

File: [105-radix_sort.c](./105-radix_sort.c)
<hr>

## 10. Bitonic sort

- Write a function that sorts an array of integers in ascending order using the Bitonic sort algorithm
### Requirements:

Prototype: <code>void bitonic_sort(int *array, size_t size);</code>
You can assume that <code>size</code> will be equal to <code>2^k</code>, where <code>k &gt;= 0</code> (when <code>array</code> is not <code>NULL</code> …)
You are allowed to use <code>printf</code>
You’re expected to print the <code>array</code> each time you swap two elements (See example below)
Output: see example

Mode: #advanced

File: [106-bitonic_sort.c](./106-bitonic_sort.c), [106-O](./106-O)
<hr>

## 11. Quick Sort - Hoare Partition scheme

- Write a function that sorts an array of integers in ascending order using the Quick sort algorithm
### Requirements:

Prototype: <code>void quick_sort_hoare(int *array, size_t size);</code>
You must implement the <code>Hoare</code> partition scheme.
The pivot should always be the last element of the partition being sorted.
You’re expected to print the <code>array</code> after each time you swap two elements (See example below)

Mode: #advanced

File: [107-quick_sort_hoare.c](./107-quick_sort_hoare.c), [107-O](./107-O)
<hr>

## 12. Dealer

-


### Requirements:

Prototype: <code>void sort_deck(deck_node_t **deck);</code>
You are allowed to use the C standard library function <code>qsort</code>
Please use the following data structures:

Mode: #advanced

File: [1000-sort_deck.c](./1000-sort_deck.c), [deck.h](./deck.h)
<hr>
