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

#endif
