#define _GNU_SOURCE
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - shell
 * @length: len
 * @s: char
 *
 * Return: 0
 */
int input(char *s, int length);

int main(void)
{
	char *buffer;
	size_t bufsize = 32;
	size_t characters = 0;

	while (true)
	{
		buffer = (char *)malloc(bufsize * sizeof(char));
		if (buffer == NULL)
		{
			perror("Unable to allocate buffer");
			exit(1);
		}
		printf("$ ");
		getline(&buffer, &characters, stdin);
		printf("%s\n", buffer);

	}
	return (0);
}
