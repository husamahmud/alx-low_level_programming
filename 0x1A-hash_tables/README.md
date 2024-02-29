# 0x1A. C - Hash tables

## Resources

#### Read or watch:

* [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://intranet.alxswe.com/rltoken/IQVfdxJlS6jhAgcuUoCseg)
* [Hash function](https://intranet.alxswe.com/rltoken/ZKpRI_FxOxAz80Onpfy0Ew)
* [Hash table](https://intranet.alxswe.com/rltoken/mxjKpEfAw3E5B8S3inPuHQ)
* [All about hash tables](https://intranet.alxswe.com/rltoken/3RwwAqmpGJpMiBa7BE9fAQ)
* [why hash tables and not arrays](https://intranet.alxswe.com/rltoken/OgO7uga3PIaCTMtTzYCY3g)
## Learning Objectives

### General

* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables
## Tasks

## 0. >>> ht = {}

- Write a function that creates a hash table.
### Requirements:

Prototype: hash_table_t *hash_table_create(unsigned long int size);


where size is the size of the array

where <code>size</code> is the size of the array
Returns a pointer to the newly created hash table
If something went wrong, your function should return <code>NULL</code>

Mode: mandatory

File: [0-hash_table_create.c](./0-hash_table_create.c)
<hr>

## 1. djb2

- Write a hash function implementing the djb2 algorithm.
### Requirements:

Prototype: <code>unsigned long int hash_djb2(const unsigned char *str);</code>
You are allowed to copy and paste the function from <a href="/rltoken/3B7lCUBD4yZh66Pbl2KcEQ" title="this page" target="_blank">this page</a>

Mode: mandatory

File: [1-djb2.c](./1-djb2.c)
<hr>

## 2. key -> index

- Write a function that gives you the index of a key.
### Requirements:

Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);


where key is the key
and size is the size of the array of the hash table

where <code>key</code> is the key
and <code>size</code> is the size of the array of the hash table
This function should use the <code>hash_djb2</code> function that you wrote earlier
Returns the index at which the key/value pair should be stored in the array of the hash table
You will have to use this hash function for all the next tasks

Mode: mandatory

File: [2-key_index.c](./2-key_index.c)
<hr>

## 3. >>> ht['betty'] = 'cool'

- Write a function that adds an element to the hash table.
### Requirements:

Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);


Where ht is the hash table you want to add or update the key/value to
key is the key. key can not be an empty string
and value is the value associated with the key. value must be duplicated. value can be an empty string

Where <code>ht</code> is the hash table you want to add or update the key/value to
<code>key</code> is the key. <code>key</code> can not be an empty string
and <code>value</code> is the value associated with the key. <code>value</code> must be duplicated. <code>value</code> can be an empty string
Returns: <code>1</code> if it succeeded, <code>0</code> otherwise
In case of collision, add the new node at the beginning of the list

Mode: mandatory

File: [3-hash_table_set.c](./3-hash_table_set.c)
<hr>

## 4. >>> ht['betty']

- Write a function that retrieves a value associated with a key.
### Requirements:

Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);


where ht is the hash table you want to look into
and key is the key you are looking for

where <code>ht</code> is the hash table you want to look into
and <code>key</code> is the key you are looking for
Returns the value associated with the element, or <code>NULL</code> if <code>key</code> couldn’t be found

Mode: mandatory

File: [4-hash_table_get.c](./4-hash_table_get.c)
<hr>

## 5. >>> print(ht)

- Write a function that prints a hash table.
### Requirements:

Prototype: void hash_table_print(const hash_table_t *ht);


where ht is the hash table

where <code>ht</code> is the hash table
You should print the key/value in the order that they appear in the array of hash table


Order: array, list

Order: array, list
Format: see example
If <code>ht</code> is NULL, don’t print anything

Mode: mandatory

File: [5-hash_table_print.c](./5-hash_table_print.c)
<hr>

## 6. >>> del ht

- Write a function that deletes a hash table.
### Requirements:

Prototype: void hash_table_delete(hash_table_t *ht);


where ht is the hash table

where <code>ht</code> is the hash table

Mode: mandatory

File: [6-hash_table_delete.c](./6-hash_table_delete.c)
<hr>

## 7. $ht['Betty'] = 'Cool'

- In PHP, hash tables are ordered. Wait… WAT? How is this even possible?
### Requirements:

Read <a href="/rltoken/SIdpN9PE_9aYBCHUGPX-fw" title="PHP Internals Book: HashTable" target="_blank">PHP Internals Book: HashTable</a>
Use the same hash function
Use these data structures:

Mode: #advanced

File: [100-sorted_hash_table.c](./100-sorted_hash_table.c)
<hr>
