#include "shell.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1 to be compared to string 2
 * @s2: string 2 to be compared to string 1
 * Return: integer < 0 if string 1 first unmatched character ASCII value is
 * less than string 2; integer > 0 if first unmatched character ASCII value
 * is greater; 0 if strings are equal
 */
int _strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;

	while (s1[i] == s2[i])
		i += 1;
		if (s1[i] == '\0')
			return (1);
		else
			return (-1);
}

/**
 * _strcompare - compares two strings
 * @s1: string 1 to be compared to string 2
 * @s2: string 2 to be compared to string 1
 * Return: integer < 0 if string 1 first unmatched character ASCII value is
 * less than string 2; integer > 0 if first unmatched character ASCII value
 * is greater; 0 if strings are equal
 */
int _strcompare(const char *s1, const char *s2)
{
	int i, result;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		result = s1[i] - s2[i];
		if (result == 0)
			continue;
		else
			break;
	}
	if (s1[i] == '\0' || s2[i] != '\0')
		result = s1[i] - s2[i];

	return (result);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;
	return (i);
}


/**
 * concatenate_strings - concatenates two strings to newly allocated space
 * @s1: string1
 * @s2: string 2 to appended to string1
 * Return: pointer to the concatenated string; NULL otherwise
 */
char *concatenate_strings(char *s1, char *s2)
{
	char *concat_str;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	concat_str = malloc((sizeof(char) * i) + (sizeof(char) * j) + 1);
	if (concat_str == NULL)
		exit(0);
	for (i = 0; s1[i] != '\0'; i++)
		concat_str[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		concat_str[i + j] = s2[j];
	concat_str[i + j] = '\0';
	return (concat_str);
}
