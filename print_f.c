#include "main.h"
/**
 * _printf - prints values to stdout
 *
 * @format: number of arguements passed
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, num = 0;
	va_list args;

	/* returns 0 if no character is passed */
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	/* iterate through *format string */
	for (i = 0; format[i] != '\0'; i++)
	{
		/* prints entrire string if no specifier is found */
		if (format[i] != '%')
			num += _putchar(format[i]);
		/* switch cases for when char '%' is found */
		else if (format[i] == '%')
		{
			num += prnt_func(args, format[i + 1]);
			i++;
		}
	}
	va_end(args);
	return (num);
}
