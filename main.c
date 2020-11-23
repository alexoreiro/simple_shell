#include "shell.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: list of arguments
 * @env: list of env vars
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[], char **env)
{
	char *ptr = NULL;
	char **string = NULL;
	int status;
	pid_t parent;
	(void)argc;

	while (1)
	{
		ptr = NULL;
		if (prompt(&ptr) == -1)
			continue;

		if (shell_built(string, env))
			continue;

	}
	return (0);
}

/**
 * prompt - prompts the user for commands
 * @ptr: ptr will hold the string of commands
 * Return: 1 for success
 */

int prompt(char **ptr)
{
	size_t size = 0;
	int len;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "~$ ", 6);
	len = getline(ptr, &size, stdin);
	if (len == EOF)
		free_cptrn(-1, 1, *ptr);
	(*ptr)[len - 1] = '\0';
	if (*(*ptr) == '\0' || (*(*ptr) == '.' && (*ptr)[1] == '\0'))
	{
		free_cptrn(99, 1, *ptr);
		return (-1);
	}
	else
		return (1);
}