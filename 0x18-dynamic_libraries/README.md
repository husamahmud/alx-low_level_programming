# 0x15. C - File I/O

## Resources

#### Read or watch:

* [File descriptors](https://intranet.alxswe.com/rltoken/Duva-9Fjyskt39R__Nnazg)
* [C Programming in Linux Tutorial #024 - open() read() write() Functions](https://intranet.alxswe.com/rltoken/x05veqiLPSxXmJf9zTtCkQ)
## Learning Objectives

### General

* Look for the right source of information online
* How to create, open, close, read and write files
* What are file descriptors
* What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
* How to use the I/O system calls open, close, read and write
* What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
* What are file permissions, and how to set them when creating a file with the open system call
* What is a system call
* What is the difference between a function and a system call
## Tasks

## 0. Tread lightly, she is near

- Write a function that reads a text file and prints it to the POSIX standard output.
### Requirements:

Prototype: <code>ssize_t read_textfile(const char *filename, size_t letters);</code>
where letters is the number of letters it should read and print
returns the actual number of letters it could read and print
if the file can not be opened or read, return <code>0</code>
if <code>filename</code> is <code>NULL</code> return <code>0</code>
if <code>write</code> fails or does not write the expected amount of bytes, return <code>0</code>

Mode: mandatory

File: [0-read_textfile.c](./0-read_textfile.c)
<hr>

## 1. Under the snow

- Create a function that creates a file.
### Requirements:

Prototype: <code>int create_file(const char *filename, char *text_content);</code>
where <code>filename</code> is the name of the file to create and <code>text_content</code> is a <code>NULL</code> terminated string to write to the file
Returns: <code>1</code> on success, <code>-1</code> on failure (file can not be created, file can not be written, <code>write</code> “fails”, etc…)
The created file must have those permissions: <code>rw-------</code>. If the file already exists, do not change the permissions.
if the file already exists, truncate it
if <code>filename</code> is <code>NULL</code> return <code>-1</code>
if <code>text_content</code> is <code>NULL</code> create an empty file

Mode: mandatory

File: [1-create_file.c](./1-create_file.c)
<hr>

## 2. Speak gently, she can hear

- Write a function that appends text at the end of a file.
### Requirements:

Prototype: <code>int append_text_to_file(const char *filename, char *text_content);</code>
where <code>filename</code> is the name of the file and <code>text_content</code> is the <code>NULL</code> terminated string to add at the end of the file
Return: <code>1</code> on success and <code>-1</code> on failure
Do not create the file if it does not exist
If <code>filename</code> is <code>NULL</code> return <code>-1</code>
If <code>text_content</code> is <code>NULL</code>, do not add anything to the file. Return <code>1</code> if the file exists and <code>-1</code> if the file does not exist or if you do not have the required permissions to write the file

Mode: mandatory

File: [2-append_text_to_file.c](./2-append_text_to_file.c)
<hr>

## 3. cp

- Write a program that copies the content of a file to another file.
### Requirements:

Usage: <code>cp file_from file_to</code>
if the number of argument is not the correct one, exit with code <code>97</code> and print <code>Usage: cp file_from file_to</code>, followed by a new line, on the <code>POSIX</code> standard error
if <code>file_to</code> already exists, truncate it
if file_from does not exist, or if you can not read it, exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error


where NAME_OF_THE_FILE is the first argument passed to your program

where <code>NAME_OF_THE_FILE</code> is the first argument passed to your program
if you can not create or if write to file_to fails, exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error


where NAME_OF_THE_FILE is the second argument passed to your program

where <code>NAME_OF_THE_FILE</code> is the second argument passed to your program
if you can not close a file descriptor , exit with code 100 and print Error: Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error


where FD_VALUE is the value of the file descriptor

where <code>FD_VALUE</code> is the value of the file descriptor
Permissions of the created file: <code>rw-rw-r--</code>. If the file already exists, do not change the permissions
You must read <code>1,024</code> bytes at a time from the <code>file_from</code> to make less system calls. Use a buffer
You are allowed to use <code>dprintf</code>

Mode: mandatory

File: [3-cp.c](./3-cp.c)
<hr>

## 4. elf

- Write a program that displays the information contained in the ELF header at the start of an ELF file.
### Requirements:

Usage: <code>elf_header elf_filename</code>
Displayed information: (no less, no more, do not include trailing whitespace)


Magic
Class
Data
Version
OS/ABI
ABI Version
Type
Entry point address

Magic
Class
Data
Version
OS/ABI
ABI Version
Type
Entry point address
Format: the same as <code>readelf -h</code> (<em>version <code>2.26.1</code></em>)
If the file is not an <code>ELF</code> file, or on error, exit with status code <code>98</code> and display a comprehensive error message to <code>stderr</code>
You are allowed to use <code>lseek</code> once
You are allowed to use <code>read</code> a maximum of 2 times at runtime
You are allowed to have as many functions as you want in your source file
You are allowed to use <code>printf</code>

Mode: #advanced

File: [100-elf_header.c](./100-elf_header.c)
<hr>
