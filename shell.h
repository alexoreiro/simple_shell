#ifndef _SHELL_H_
#define _SHELL_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>

/* string functions */
int _putchar(char);
int _strlen(const char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *str1, char *str2);
int _strncmp(char *str1, char *str2, int len);
int _strcmp_env(const char *str1, const char *str2);
char *_strdup(const char *str);
int _write(char *str);
char *_strncat_env(char *dest, char *src, int n);

/**
 * struct list_s - singly linked list
 * @str: points to the string
 * @len: points to the length
 * @next: points to the next node
 */

typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

/**
 * struct env_var_list_s - singly linked list
 * @key: points to the key
 * @value: points to the value
 * @next: points to the next node
 */

typedef struct env_var_list_s
{
char *key;
char *value;
struct env_var_list_s *next;
} env_t;

/**
 * struct builtin_s - function pointer
 * @cmd: takes in a command from user
 * @func: pointer to a function
 */
typedef struct builtin_s
{
char *cmd;
int (*func)();
} builtin;

/**
 * struct all_variables - struct that holds all variables for functions
 * @buf: buffer for user input
 * @n_env_nod: number of nodes in environment linked list
 * @len: length
 * @in_hd: user input in a linked list
 * @env_hd: environment variable linked list
 * @env_ar: environment variables in double pointer array
 * @pth_ar: the path in a double pointer array
 * @in_ar: user input in double pointer array
 * @n_tok: the number of tokens
 * @builtin_func: pointer to builtin function
 */

typedef struct all_variables
{
char *buf;
size_t n_env_nod;
size_t len;
list_t *in_hd;
env_t *env_hd;
char **env_ar;
char **pth_ar;
char **in_ar;
int n_tok;
int (*builtin_func)();

} all_variables_t;

#endif
