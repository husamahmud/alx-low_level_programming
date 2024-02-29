# 0x14. C - Bit manipulation

## Resources

#### Read or watch:

* [Operators in C - Part 6](https://intranet.alxswe.com/rltoken/U23plDtAeWRnXKK_EzQRug)
* [Operators in C - Part 7 (Bitwise Operators-II)](https://intranet.alxswe.com/rltoken/Bfym_wLbNRQgCv_XcIRTRg)
* [Bitwise Operators 1: The AND Operation](https://intranet.alxswe.com/rltoken/hIPyd6L6Pg9OZ6zCXwo6aw)
* [Bitwise Operators 2: The OR Operation](https://intranet.alxswe.com/rltoken/M1FRe-jfuKSDe4kle1ocsw)
* [Bitwise Operators 3: The XOR Operation](https://intranet.alxswe.com/rltoken/ngPcZF4EFySsQpStXRH_nA)
* [Bitwise Operators 4: The Logical Shift Operation](https://intranet.alxswe.com/rltoken/-8M7r6Omy5yZ-27f2HKbsg)
* [Bit Manipulation](https://intranet.alxswe.com/rltoken/wTSa_lRda5k1rH6JTsSoFw)
* [Bitwise Operators](https://intranet.alxswe.com/rltoken/avGgN526-UnTPvpunGviig)
* [Google](https://intranet.alxswe.com/rltoken/-tOFAtANisYQthxNBmJB8g)
* [Youtube](https://intranet.alxswe.com/rltoken/-PNa1vv5T3tqVVY4PRlGrg)
## Learning Objectives

### General

* Look for the right source of information without too much help
* How to manipulate bits and use bitwise operators
## Tasks

## 0. 0

- Write a function that converts a binary number to an unsigned int.
### Requirements:

Prototype: <code>unsigned int binary_to_uint(const char *b);</code>
where <code>b</code> is pointing to a string of <code>0</code> and <code>1</code> chars
Return: the converted number, or 0 if


there is one or more chars in the string b that is not 0 or 1
b is NULL

there is one or more chars in the string <code>b</code> that is not <code>0</code> or <code>1</code>
<code>b</code> is <code>NULL</code>

Mode: mandatory

File: [0-binary_to_uint.c](./0-binary_to_uint.c)
<hr>

## 1. 1

- Write a function that prints the binary representation of a number.
### Requirements:

Prototype: <code>void print_binary(unsigned long int n);</code>
Format: see example
You are not allowed to use arrays
You are not allowed to use <code>malloc</code>
You are not allowed to use the <code>%</code> or <code>/</code> operators

Mode: mandatory

File: [1-print_binary.c](./1-print_binary.c)
<hr>

## 2. 10

- Write a function that returns the value of a bit at a given index.
### Requirements:

Prototype: <code>int get_bit(unsigned long int n, unsigned int index);</code>
where <code>index</code> is the index, starting from <code>0</code> of the bit you want to get
Returns: the value of the bit at index <code>index</code> or <code>-1</code> if an error occured

Mode: mandatory

File: [2-get_bit.c](./2-get_bit.c)
<hr>

## 3. 11

- Write a function that sets the value of a bit to 1 at a given index.
### Requirements:

Prototype: <code>int set_bit(unsigned long int *n, unsigned int index);</code>
where <code>index</code> is the index, starting from <code>0</code> of the bit you want to set
Returns: <code>1</code> if it worked, or <code>-1</code> if an error occurred

Mode: mandatory

File: [3-set_bit.c](./3-set_bit.c)
<hr>

## 4. 100

- Write a function that sets the value of a bit to 0 at a given index.
### Requirements:

Prototype: <code>int clear_bit(unsigned long int *n, unsigned int index);</code>
where <code>index</code> is the index, starting from <code>0</code> of the bit you want to set
Returns: <code>1</code> if it worked, or <code>-1</code> if an error occurred

Mode: mandatory

File: [4-clear_bit.c](./4-clear_bit.c)
<hr>

## 5. 101

- Write a function that returns the number of bits you would need to flip to get from one number to another.
### Requirements:

Prototype: <code>unsigned int flip_bits(unsigned long int n, unsigned long int m);</code>
You are not allowed to use the <code>%</code> or <code>/</code> operators

Mode: mandatory

File: [5-flip_bits.c](./5-flip_bits.c)
<hr>

## 6. Endianness

- Write a function that checks the endianness.
### Requirements:

Prototype: <code>int get_endianness(void);</code>
Returns: <code>0</code> if big endian, <code>1</code> if little endian

Mode: #advanced

File: [100-get_endianness.c](./100-get_endianness.c)
<hr>

## 7. Crackme3

- Find the password for this program.
### Requirements:

Save the password in the file <code>101-password</code>
Your file should contain the exact password, no new line, no extra space

Mode: #advanced

File: [101-password](./101-password)
<hr>
