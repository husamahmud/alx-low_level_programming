# 0x0A. C - argc, argv

## Resources

#### Read or watch:

* [Arguments to main](https://intranet.alxswe.com/rltoken/Jip_nI4tv2ybQZ-jV3fqJg)
* [argc and argv](https://intranet.alxswe.com/rltoken/31aLwv8qsXuiUZrOk9Djqg)
* [What does argc and argv mean?](https://intranet.alxswe.com/rltoken/A0pzqslB6Z3Y3OV3hJQ6Tw)
* [how to compile with unused variables](https://intranet.alxswe.com/rltoken/MkOUE1ndq1UAx9Erk-AVbg)
## Learning Objectives

### General

* How to use arguments passed to your program
* What are two prototypes of main that you know of, and in which case do you use one or the other
* How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters
## Tasks

## 0. It ain't what they call you, it's what you answer to

- Write a program that prints its name, followed by a new line.
### Requirements:

If you rename the program, it will print the new name, without having to compile it again
You should not remove the path before the name of the program

Mode: mandatory

File: [0-whatsmyname.c](./0-whatsmyname.c)
<hr>

## 1. Silence is argument carried out by other means

- Write a program that prints the number of arguments passed into it.
### Requirements:

Your program should print a number, followed by a new line

Mode: mandatory

File: [1-args.c](./1-args.c)
<hr>

## 2. The best argument against democracy is a five-minute conversation with the average voter

- Write a program that prints all arguments it receives.
### Requirements:

All arguments should be printed, including the first one
Only print one argument per line, ending with a new line

Mode: mandatory

File: [2-args.c](./2-args.c)
<hr>

## 3. Neither irony nor sarcasm is argument

- Write a program that multiplies two numbers.
### Requirements:

Your program should print the result of the multiplication, followed by a new line
You can assume that the two numbers and result of the multiplication can be stored in an integer
If the program does not receive two arguments, your program should print <code>Error</code>, followed by a new line, and return <code>1</code>

Mode: mandatory

File: [3-mul.c](./3-mul.c)
<hr>

## 4. To infinity and beyond

- Write a program that adds positive numbers.
### Requirements:

Print the result, followed by a new line
If no number is passed to the program, print <code>0</code>, followed by a new line
If one of the number contains symbols that are not digits, print <code>Error</code>, followed by a new line, and return <code>1</code>
You can assume that numbers and the addition of all the numbers can be stored in an <code>int</code>

Mode: mandatory

File: [4-add.c](./4-add.c)
<hr>

## 5. Minimal Number of Coins for Change

- Write a program that prints the minimum number of coins to make change for an amount of money.
### Requirements:

Usage: <code>./change cents</code>
where <code>cents</code> is the amount of cents you need to give back
if the number of arguments passed to your program is not exactly <code>1</code>, print <code>Error</code>, followed by a new line, and return <code>1</code>
you should use <code>atoi</code> to parse the parameter passed to your program
If the number passed as the argument is negative, print <code>0</code>, followed by a new line
You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent

Mode: #advanced

File: [100-change.c](./100-change.c)
<hr>
