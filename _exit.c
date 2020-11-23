#include "shell.h"
/**
 * _exit - prints out an error and exits
 * @argv: arguments
 * @status: exits with this status
 */

void e_exit(char *argv, int status)
{
(void)status;
perror(argv);
exit(0);
}
