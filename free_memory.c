#include "shell.h"


/**
* free_array - frees an array of char pointers
* @array: a pointer to the array of chars
*/
void free_array(char **array)
{
	int i = 0;

	if (array == NULL)
		return;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

/**
* free_cptrn - frees n amounts of strings
* @status: the status to exit with
* @n: the number of strings to free
*/
void free_cptrn(int status, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *ptr;

	va_start(args, n);


	for (i = 0; i < n; i += 1)
	{
		ptr = va_arg(args, char *);
		free(ptr);
	}

	va_end(args);
	if (status == 99)
		return;
	exit(0);
}