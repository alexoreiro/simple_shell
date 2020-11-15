#include "shell.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: an integer result of the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((int) (s1[i] - s2[i]));
		i++;
	}
	return (0);
}
/**
 * _strncmp - function that compares two strings
 * @str1: first string to compare
 * @str2: secod string to compare
 * @len: takes in the length
 * Return: 0
 */
int _strncmp(char *str1, char *str2, int len)
{
	int i;

	for (i = 0; i < len; i++)
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	return (0);
}
/**
 * _strcmp_env - a function that compares two strings for a const char*
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: an integer result of the comparison
 */
int _strcmp_env(const char *s1, const char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((int) (s1[i] - s2[i]));
		i++;
	}
	return (0);
}
/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * of the string str
 * @str: input string of const char*
 * Return: a pointer to a newly allocated space in memory
 */
char *_strdup(const char *str)
{
	unsigned int i;
	char *string;

	if (str == NULL)
		return (NULL);
	string = _grand_malloc(sizeof(char) * (_strlen(str) + 1));
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '\n')
			break;
		string[i] = str[i];
	}
	string[i] = '\0';
	return (string);
}
/**
 * _strlen - returns the length of a string of const char*
 * @s: input string
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strncat_env - a function that concatenates two strings
 * @dest: string to copy to
 * @src: string to copy
 * @n: bytes from src to append
 * Return: a pointer to the resulting string dest
 *
 */
char *_strncat_env(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
		j++;

	while (i < n && src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}

	return (dest);
}

