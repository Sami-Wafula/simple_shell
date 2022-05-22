Creation of a simple shell that emulates the working of existing shell.

0x16. C - Simple Shell

0.Betty would be proud
A beautiful code that passes the Betty checks

1.Simple shell 0.1
A UNIX command line interpreter.

2.Simple shell 0.2
Handles PATH.Fork must not be called if the command doesn't exist.

3.Simple shell 0.4
Implementation of exit that exists in the shell. You don't have to handle any argument to exit

4.Simple shell 1.0
Implementation of env built-in that prints current environment.

5.Simple shell 0.1.1
Creating our own getline function using static variables. Use a buffer to read many chars at once and call the least possible read system call.

6.Simple shell 0.2.1
Simple shell 0.2+ without using strtok.

7.Simple shell 0.4.1
Simple shell 0.4+ that handles arguments for built-in exit
Usage: exit status, where status is an integer used to exit the shell.

8.setenv, unsetenv
Implementation of setenv and unsetenv commands

9.cd
Implementation of builtin cd command

10.;
Handling command separator ;

11.&& and ||
Handling && and || shell logical operators

12.alias
Handling builtin alias command

13.Variables
Handling variables replacement, $? variable and $$ variable<br>

14.Comments
Handling comments(#)

15.File as input
Usage: simple_shell[filename]
The shell can take a file as a command line argument. The file should contain all commands that the shell should run before exiting. The file should contain one command per line. In this mode, the shell should not print a prompt and should not read from stdin
