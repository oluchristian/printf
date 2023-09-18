#include "main.h"
/**
 * _printf - prints values to stdout
 *
 * @format: number of arguements passed
 *
 * Return: the number of characters printed
 */
int _printf(char *format, ...)
{
	int i = 0, num = 0;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'c')
			{
				char letter = va_arg(args, int);

				_putchar(letter);
				num += 1;
			}
			else if (format[i] == 's')
			{
				char *str = va_arg(args, char*);

				while (*str)
				{
					_putchar(*str);
					str++;
					num += 1;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			num += 1;
		}
	}
	va_end(args);
	return (num);
}

