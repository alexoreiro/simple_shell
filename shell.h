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






#endif
