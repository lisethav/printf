#include "holberton.h"
/**
 * pr_R - Unknown
 * @arg: arguments
 *
 * Return: prints %r.
*/
int pr_R(va_list arg) /* if (*p == 'r')*/
{
	char *s;
	char buffer[1024];

	if (arg == NULL)
	{
		return (-1);
	}
	buffer[0] = '%';
	buffer[1] = 'r';
	s = &buffer[0];
	write(1, s, 2);
	return (2);
}
