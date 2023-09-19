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
	int i = 0, num = 0, str_count = 0;
	char letter;
	va_list args;

	va_start(args, format);
	/* returns error code of -1 if no character is passed */
	if (format == NULL)
		return (-1);
	/* iterate through *format string */
	for (i = 0; format[i] != '\0'; i++)
	{
		/* prints entrire string if no specifier is found */
		if (format[i] != '%')
			_putchar(format[i]);
		/* switch cases for when char '%' is found */
		else if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					letter = va_arg(args, int);

					_putchar(letter);
					num += 1;
					break;
				case 's':
					str_count = _puts(va_arg(args, char *));

					num += (str_count - 1);
					break;
				case '%':
					_putchar('%');
					break;
			}
			num += 1;
		}
	}
	va_end(args);
	return (num);
}
