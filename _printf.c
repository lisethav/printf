#include "holberton.h"
/**
 * _printf - function print to the string with parameters
 *
 * @format: the string that contains the text to be written to stdout
 * Return: the number of characters printed. on Error: -1
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int count_char = 0; /*count the amount of chars*/
	const char *p;
	int i = 0;

	op_t print[] = {{'c', pr_char}, {'s', pr_string}, {'%', pr_perc},
		{'d', pr_di}, {'i', pr_di}, {'u', pr_ui}, {'\0', pr_zero},
		{'o', pr_o}, {'r', pr_R}, {'x', pr_x}, {'X', pr_X}};
	va_start(arg, format);
	if (format == NULL)
	{
		write(1, "Error\n", 6);
		exit(-1);
	}
	if (*format == '\0')
	{
		write(1, "vacío\0", 6);
		exit(-1);
	}
	for (p = format; *p != '\0'; p++) /*p points to format address*/
	{
		if (*p != '%')
		{
			write(1, p, 1);
			count_char++;
		}
		else
		{
			p++;
			i = 0;
			while (i < 11)
			{
				if (*p == print[i].op)
					count_char = count_char + print[i].f(arg);
				i++;
			}
		}
	}
	va_end(arg);
	return (count_char);
}
