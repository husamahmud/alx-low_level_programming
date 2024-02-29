# 0x03. C - Debugging

## Resources

#### Read or watch:

* [Debugging](https://intranet.alxswe.com/rltoken/faGcpiJiejHH6GhqpmbhUw)
* [Rubber Duck Debugging](https://intranet.alxswe.com/rltoken/RaecqJBNkmZ92vLMpNDuGg)
## Learning Objectives

### General

* What is debugging
* What are some methods of debugging manually
* How to read the error messages
## Tasks

## 0. Multiple mains

- In most projects, we often give you only one main file to test with. For example, this main file is a test for a postitive_or_negative() function similar to the one you worked with in an earlier C project:
### Requirements:

You only need to upload <code>0-main.c</code> and <code>main.h</code> for this task. We will provide our own <code>positive_or_negative()</code> function.
You are not allowed to add or remove lines of code, you may change only <strong>one</strong> line in this task.

Mode: mandatory

File: [0-main.c](./0-main.c), [main.h](./main.h)
<hr>

## 1. Like, comment, subscribe

- Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.
### Requirements:

Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.
You do not have to compile with <code>-Wall -Werror -Wextra -pedantic</code> for this task.

Mode: mandatory

File: [1-main.c](./1-main.c)
<hr>

## 2. 0 > 972?

- This program prints the largest of three integers.
### Requirements:

Line count will not be checked for this task.

Mode: mandatory

File: [2-largest_number.c](./2-largest_number.c), [main.h](./main.h)
<hr>

## 3. Leap year

- This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.
### Requirements:

Line count will not be checked for this task.
You can assume that all test cases have valid months (i.e. the value of <code>month</code> will never be less than <code>1</code> or greater than <code>12</code>) and valid days (i.e. the value of <code>day</code> will never be less than <code>1</code> or greater than <code>31</code>).
You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).

Mode: mandatory

File: [3-print_remaining_days.c](./3-print_remaining_days.c), [main.h](./main.h)
