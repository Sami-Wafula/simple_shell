#include "holberton.h"

/**
 * execute - execute the commands
 * @parse: is a char
 * Return: Always 0.
 */

int execute(char **parse)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execve(parse[0], parse, NULL) == -1)
		{
			perror("Error:");
			exit(1);
		}
	}
	else if (pid > 0)
	{
		wait(&status);
	}
	else
		perror("Error:");

	return (0);
}
