# 0x08. C - Recursion

## Resources

#### Read or watch:

* [0x08. Recursion, introduction](https://intranet.alxswe.com/rltoken/dzZB83Hm3lO7dScjhebAxw)
* [What on Earth is Recursion?](https://intranet.alxswe.com/rltoken/xYjKl3024oN58Bi_621_vQ)
* [C - Recursion](https://intranet.alxswe.com/rltoken/u4ojc5CZpf4qiuQvmXCiOA)
* [C Programming Tutorial 85, Recursion pt.1](https://intranet.alxswe.com/rltoken/Wv-wffgpXelN9ZTrbmiOyA)
* [C Programming Tutorial 86, Recursion pt.2](https://intranet.alxswe.com/rltoken/7GVdI-KT-M1vOIzwEjSahQ)
## Learning Objectives

### General

* What is recursion
* How to implement recursion
* In what situations you should implement recursion
* In what situations you shouldn’t implement recursion
## Tasks

## 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget

- Write a function that prints a string, followed by a new line.
### Requirements:

Prototype: <code>void _puts_recursion(char *s);</code>

Mode: mandatory

File: [0-puts_recursion.c](./0-puts_recursion.c)
<hr>

## 1. Why is it so important to dream? Because, in my dreams we are together

- Write a function that prints a string in reverse.
### Requirements:

Prototype: <code>void _print_rev_recursion(char *s);</code>

Mode: mandatory

File: [1-print_rev_recursion.c](./1-print_rev_recursion.c)
<hr>

## 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange

- Write a function that returns the length of a string.
### Requirements:

Prototype: <code>int _strlen_recursion(char *s);</code>

Mode: mandatory

File: [2-strlen_recursion.c](./2-strlen_recursion.c)
<hr>

## 3. You mustn't be afraid to dream a little bigger, darling

- Write a function that returns the factorial of a given number.
### Requirements:

Prototype: <code>int factorial(int n);</code><br>
If <code>n</code> is lower than <code>0</code>, the function should return <code>-1</code> to indicate an error<br>
Factorial of <code>0</code> is <code>1</code>

Mode: mandatory

File: [3-factorial.c](./3-factorial.c)
<hr>

## 4. Once an idea has taken hold of the brain it's almost impossible to eradicate

- Write a function that returns the value of x raised to the power of y.
### Requirements:

Prototype: <code>int _pow_recursion(int x, int y);</code><br>
If <code>y</code> is lower than <code>0</code>, the function should return <code>-1</code>

Mode: mandatory

File: [4-pow_recursion.c](./4-pow_recursion.c)
<hr>

## 5. Your subconscious is looking for the dreamer

- Write a function that returns the natural square root of a number.
### Requirements:

Prototype: <code>int _sqrt_recursion(int n);</code><br>
If <code>n</code> does not have a natural square root, the function should return <code>-1</code>

Mode: mandatory

File: [5-sqrt_recursion.c](./5-sqrt_recursion.c)
<hr>

## 6. Inception. Is it possible?

- Write a function that returns 1 if the input integer is a prime number, otherwise return 0.
### Requirements:

Prototype: <code>int is_prime_number(int n);</code>

Mode: mandatory

File: [6-is_prime_number.c](./6-is_prime_number.c)
<hr>

## 7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything

- Write a function that returns 1 if a string is a palindrome and 0 if not.
### Requirements:

Prototype: <code>int is_palindrome(char *s);</code><br>
An empty string is a palindrome

Mode: #advanced

File: [100-is_palindrome.c](./100-is_palindrome.c)
<hr>

## 8. Inception. Now, before you bother telling me it's impossible...

- Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.
### Requirements:

Prototype: <code>int wildcmp(char *s1, char *s2);</code>
<code>s2</code> can contain the special character <code>*</code>.
The special char <code>*</code> can replace any string (including an empty string)

Mode: #advanced

File: [101-wildcmp.c](./101-wildcmp.c)
