#include "shell.c"

/**
 * strtoken - splits a string into words
 * @str: a pointer to the string
 * Retur: a pointer to an array
 */

char **strtoken(char *str)
{
char **words;
int count;

count = word_count(str);
if (count <= 0)
return (NULL);

words = malloc(sizeof(char *) * (count + 1));
if (!words)
return (NULL);
get_word(words, str);

return (words);
}

/**
 * cpy_str - clips a word from the string
 * @end: the end of the word
 * @s: the string to clip the word from
 * @word_box: the array to store the word in
 */

void cpy_str(int end, char *s, char **word_box)

{
int i;

(*word_box) = malloc(sizeof(char) * end +1);
if (!(*word_box))
{
perror("Error: malloc\n");
free(word_box);
exit(0);
}

for (i = 0; i < end; i += 1)
(*word_box)[i] = s[i];
(*word_box)[i] = '\0';
}
