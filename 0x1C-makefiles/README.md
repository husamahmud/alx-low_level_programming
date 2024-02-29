# 0x1C. C - Makefiles

## Resources

#### Read or watch:

* [What is a makefile and how does it work](https://intranet.alxswe.com/rltoken/pWZA00v30Bk4bNIv9atGeg)
* [Installing the make utility](https://intranet.alxswe.com/rltoken/1AUviCUw3TrznESzWbrKAQ)
* [make-official documentation](https://intranet.alxswe.com/rltoken/vQFeXLq1izNua2z2dVl5Yg)
* [More about Makefile](https://intranet.alxswe.com/rltoken/moIpBFMN3sJcVMNn5VIFlA)
## Learning Objectives

### General

* What are make, Makefiles
* When, why and how to use Makefiles
* What are rules and how to set and use them
* What are explicit and implicit rules
* What are the most common / useful rules
* What are variables and how to set and use them
## Tasks

## 0. make -f 0-Makefile

- Create your first Makefile.
### Requirements:

name of the executable: <code>school</code>
rules: all


The all rule builds your executable

The <code>all</code> rule builds your executable
variables: none

Mode: mandatory

File: [0-Makefile](./0-Makefile)
<hr>

## 1. make -f 1-Makefile

- Requirements:
### Requirements:

name of the executable: <code>school</code>
rules: all


The all rule builds your executable

The <code>all</code> rule builds your executable
variables: CC, SRC


CC: the compiler to be used
SRC: the .c files

<code>CC</code>: the compiler to be used
<code>SRC</code>: the <code>.c</code> files

Mode: mandatory

File: [1-Makefile](./1-Makefile)
<hr>

## 2. make -f 2-Makefile

- Create your first useful Makefile.
### Requirements:

name of the executable: <code>school</code>
rules: all


The all rule builds your executable

The <code>all</code> rule builds your executable
variables: CC, SRC, OBJ, NAME


CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable

<code>CC</code>: the compiler to be used
<code>SRC</code>: the <code>.c</code> files
<code>OBJ</code>: the <code>.o</code> files
<code>NAME</code>: the name of the executable
The <code>all</code> rule should recompile only the updated source files
You are not allowed to have a list of all the <code>.o</code> files

Mode: mandatory

File: [2-Makefile](./2-Makefile)
<hr>

## 3. make -f 3-Makefile

- Requirements:
### Requirements:

name of the executable: <code>school</code>
rules: all, clean, oclean, fclean, re


all: builds your executable
clean: deletes all Emacs and Vim temporary files along with the executable
oclean: deletes the object files
fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
re: forces recompilation of all source files

<code>all</code>: builds your executable
<code>clean</code>: deletes all Emacs and Vim temporary files along with the executable
<code>oclean</code>: deletes the object files
<code>fclean</code>: deletes all Emacs and Vim temporary files, the executable, and the object files
<code>re</code>: forces recompilation of all source files
variables: CC, SRC, OBJ, NAME, RM


CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
RM: the program to delete files

<code>CC</code>: the compiler to be used
<code>SRC</code>: the <code>.c</code> files
<code>OBJ</code>: the <code>.o</code> files
<code>NAME</code>: the name of the executable
<code>RM</code>: the program to delete files
The <code>all</code> rule should recompile only the updated source files
The <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code> rules should never fail
You are not allowed to have a list of all the <code>.o</code> files

Mode: mandatory

File: [3-Makefile](./3-Makefile)
<hr>

## 4. A complete Makefile

- Requirements:
### Requirements:

name of the executable: <code>school</code>
rules: all, clean, fclean, oclean, re


all: builds your executable
clean: deletes all Emacs and Vim temporary files along with the executable
oclean: deletes the object files
fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
re: forces recompilation of all source files

<code>all</code>: builds your executable
<code>clean</code>: deletes all Emacs and Vim temporary files along with the executable
<code>oclean</code>: deletes the object files
<code>fclean</code>: deletes all Emacs and Vim temporary files, the executable, and the object files
<code>re</code>: forces recompilation of all source files
variables: CC, SRC, OBJ, NAME, RM, CFLAGS


CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
RM: the program to delete files
CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic

<code>CC</code>: the compiler to be used
<code>SRC</code>: the <code>.c</code> files
<code>OBJ</code>: the <code>.o</code> files
<code>NAME</code>: the name of the executable
<code>RM</code>: the program to delete files
<code>CFLAGS</code>: your favorite compiler flags: <code>-Wall -Werror -Wextra -pedantic</code>
The <code>all</code> rule should recompile only the updated source files
<p>The <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code> rules should never fail</p>
<p>You are not allowed to have a list of all the <code>.o</code> files</p>

Mode: mandatory

File: [4-Makefile](./4-Makefile)
<hr>

## 5. Island Perimeter

- Technical interview preparation:
### Requirements:

You are not allowed to google anything
Whiteboard first

Mode: mandatory

File: [5-island_perimeter.py](./5-island_perimeter.py)
<hr>

## 6. make -f 100-Makefile

- Requirements:
### Requirements:

name of the executable: <code>school</code>
rules: all, clean, fclean, oclean, re


all: builds your executable
clean: deletes all Emacs and Vim temporary files along with the executable
oclean: deletes the object files
fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
re: forces recompilation of all source files

<code>all</code>: builds your executable
<code>clean</code>: deletes all Emacs and Vim temporary files along with the executable
<code>oclean</code>: deletes the object files
<code>fclean</code>: deletes all Emacs and Vim temporary files, the executable, and the object files
<code>re</code>: forces recompilation of all source files
variables: CC, SRC, OBJ, NAME, RM, CFLAGS


CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
RM: the program to delete files
CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic

<code>CC</code>: the compiler to be used
<code>SRC</code>: the <code>.c</code> files
<code>OBJ</code>: the <code>.o</code> files
<code>NAME</code>: the name of the executable
<code>RM</code>: the program to delete files
<code>CFLAGS</code>: your favorite compiler flags: <code>-Wall -Werror -Wextra -pedantic</code>
The <code>all</code> rule should recompile only the updated source files
The <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code> rules should never fail
You are not allowed to have a list of all the <code>.o</code> files
You have to use <code>$(RM)</code> for the cleaning up rules, but you are not allowed to set the <code>RM</code> variable
You are not allowed to use the string <code>$(CC)</code> more than once in your Makefile
You are only allowed to use the string <code>$(RM)</code> twice in your Makefile
You are not allowed to use the string <code>$(CFLAGS)</code> (but the compiler should still use the flags you set in this variable)
You are not allowed to have an <code>$(OBJ)</code> rule
You are not allowed to use the <code>%.o: %.c</code> rule
Your Makefile should work even if there is a file in the folder that has the same name as one of your rule
Your Makefile should not compile if the header file <code>m.h</code> is missing

Mode: #advanced

File: [100-Makefile](./100-Makefile)
<hr>
