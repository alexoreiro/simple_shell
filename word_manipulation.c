#include "shell.h"

/**
* count_words - counts the number of words in a string
* @str: a pointer to the string
* Return: the number of words in a string
*/

int count_words(char *str)
{
	unsigned int count, i;
	int found;

	if (str == NULL || *str == '\0')
		return (-1);

	found = i = count = 0;

	if (str[1] == '\0' && *str == ' ')
		return (-1);
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i + 1] == '\0')
		{
			if (str[i] != ' ')
				found = 1;
			if (found)
			{
				count += 1;
				found = 0;
			}
			i += 1;
			continue;
		}
		else
			found = 1;
		i += 1;
	}
	return (count);
}

/**
* get_word - get a word from a string to copy
* @words: an array of words
* @str: a pointer to the string
* Return: the array of words
*/
void get_word(char **words, char *str)
{
	int i, start, found, count;

	count = i = start = found = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i + 1] == '\0')
		{
			if (str[i] != ' ')
			{
				i += 1;
				found = 1;
			}
			if (found)
			{
				copy_string(i - start, str + start, words + count);
				if (!(words + count))
					exit(0);
				count += 1;
				start = i + 1;
				found = 0;
			}
				if (str[i] == '\0')
					continue;
			i += 1;
			start += 1;
			continue;
		}
		else
		{
			if (!found)
				start = i;
			found = 1;
		}
		i += 1;
	}
	words[count] = NULL;
}
