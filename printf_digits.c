#include "main.h"

/**
  * _printf - function that prints anything
  *
  * @format: List of types of arguments passed to the function
  *
  * Return: 0 - success
  */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int digit, integer;

	va_start(args, format);

	if (format)
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				i++;
				switch (format[i])
				{
					case 'd':
						digit = va_arg(args, int);

						_putchar(digit);
						break;
					case 'i':
						integer = va_arg(args, int);

						_putchar(integer);
						break;
					default:
						continue;
				}
			}
		}
	}
	va_end(args);
	return (0);
}
