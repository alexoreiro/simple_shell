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
#include <stdarg.h>
/**
 * struct builtins - builtin command and functions for shell
 * @cmd: cmd name
 * @f: pointer to builtin functions
 *
 * Description: struct for builtin functions
 */

typedef struct builtins
{
	char *cmd;
	int (*f)(char **args, char **env);

} built_t;

/* Function Declarations for builtin shell commands */
int shell_env(char **args, char **env);
int shell_exit(char **args, char **env);
int shell_built(char **args, char **env);

/* Function Declaretion for free memory */
void free_array(char **env_ar);
void free_cptrn(int status, const unsigned int n, ...);

/* Function to print prompt */
int prompt(char **ptr);

/* Function to signal handler */
void signal_handler(int signo);

/* Function to string manipulation */
char **strtoken(char *str);
int word_count(char *str);
void get_word(char **words, char *str);
void cpy_str(int end, char *s, char **word_box);
void check_path(char **string, char **env);
char *_getenv(const char *name, char **env);
char *str_concat(char *s1, char *s2);
int _strlen(char *s);
void exit(char *argv, int status);

#endif
