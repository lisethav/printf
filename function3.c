#include "holberton.h"
/**
 *pr_x - Unsigned hexadecimal integer
 *
 * @arg: arguments
 * Return: 0.
 */
int pr_x(va_list arg) /* if (*p == 'x')*/
{
	int i;
	char buffer[1024];

	i = va_arg(arg, int);
	if (arg == NULL)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	_itoa(i, buffer, 16); /*here 16 means hexadecimal*/
	write(1, buffer, _strlen(buffer));
	return (0);
}

/**
 * pr_X - Unsigned hexadecimal int (capital letters)
 *
 * @arg: arg
 * Return: 0
 */
int pr_X(va_list arg) /*if (*p == 'X')*/
{
	int i, j;
	char buffer[20];

	i = va_arg(arg, int);
	if (arg == NULL)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	_itoa(i, buffer, 16); /*here 16 means hexadecimal*/
	for (j = 0; buffer[j] != '\0'; j++) /*hexadecimal system*/
	{
		if (buffer[j] == 'a')
			buffer[j] = 'A';
		if (buffer[j] == 'b')
			buffer[j] = 'B';
		if (buffer[j] == 'c')
			buffer[j] = 'C';
		if (buffer[j] == 'd')
			buffer[j] = 'D';
		if (buffer[j] == 'e')
			buffer[j] = 'E';
		if (buffer[j] == 'f')
			buffer[j] = 'F';
	}
	write(1, buffer, _strlen(buffer));
	return (0);
}
