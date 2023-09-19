#include "main.h"

/**
  * prnt_func - function that returns an identifier
  *
  * @s: paramenter of argument identifier
  * @args: list of variadic arguments
  *
  * Return: value of the identifier
  */
int prnt_func(va_list args, char s)
{
	if (s == 'c')
		return (_putchar(va_arg(args, int)));
	if (s == 's')
		return (_puts(va_arg(args, char *)));
	if (s == '%')
		return (_putchar('%'));
	return (0);
}
