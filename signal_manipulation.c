#include "shell.h"
/**
 * signal_manipulation - reprints prompt when signal ctrl+C is captured
 * @signal: signal number
 */
void signal_manipulation(int signal)
{
	if (signal == SIGINT)
	{
		write(STDOUT_FILENO, "\n", 1);
		write(STDOUT_FILENO, "~$ ", 3);
	}
}
