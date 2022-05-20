#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork & wait & execve example
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t child_pid;
    int status;
    size_t len = 256, i;
    char *ch;
    char **argv;

	ch = malloc(len + 1);
    	printf("$ ");
	while((i = getline(&ch, &len, stdin)) != EOF)
	{
    		**argv = {ch, NULL};
		child_pid = fork(); 
    		if (child_pid == -1)
    		{
        		perror("Error:");
        		return (1);
    		}
    		if (child_pid == 0) 
    		{
			if (access(ch, X_OK))
			{
				if (execve(ch, argv, NULL) == -1)
				{
					perror("Error:");
					return(-1);
				}
    			}
		}
    		else 
    		{
        		wait(&status);
			printf("$ ");
    		}
	}
    return (0);
}
