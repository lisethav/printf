#include "holberton.h"
/**
 * pr_ui - Unsigned decimal integer
 *
 * @arg: arguments
 * Return: 0
 */
int pr_ui(va_list __attribute__((unused))arg) /*if (*p == 'u')*/
{
	int i;
	char *s;
	char buffer[1024];
	char buffer_tmp[20];
	int size_write = 0;

	unsigned int long ui;
	ui = (unsigned int)INT_MAX + 1024;

	if (ui <= (unsigned int) INT_MAX)
	{
		i = (int) ui;
		s = _itoa(i, buffer, 10);
		size_write = strlen(s);
	}
	else
	{
		i = (int) (ui / 1000000000);
		s = _itoa(i, buffer, 10);
		size_write = strlen(s);
		i = (int) (ui - ((unsigned int) i) * 1000000000);
		_itoa(i, buffer_tmp, 10);
		strcat(buffer, buffer_tmp);
		size_write = strlen(buffer);
	}
	write(1, s, size_write);
	return (0);
}
/**
 * pr_zero - When the users try _printf("%"), without indicator specifier
 *
 * @arg: arguments
 * Return: Prints "Error"
 */
int pr_zero(va_list __attribute__((unused))arg) /* if (*p == '\0') */
{
	write(1, "Error\n", 6);
	exit(-1);
}
