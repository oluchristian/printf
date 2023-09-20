#include "main.h"

/**
  * print_int - function prints out a signed integer
  *
  * @n: integer value
  * @sign: bool that represents sign of the int
  *
  * Return: number of integers printed
  */
int print_int(int n, int sign)
{
	unsigned int neg = 0, d = 1, digit, num;

	if (!sign)
		num = (unsigned int)n;
	else if (n < 0)
	{
		_putchar('-');
		neg++;
		num = n * (-1);
	}
	else
		num = n;
	digit = num / d;

	while (digit > 9)
	{
		d *= 10;
		digit = num / d;
	}

	while (d >= 1)
	{
		digit = ((num / d) % 10), d /= 10;
		neg += _putchar('0' + digit);
	}
	return (neg);
}

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
	if (s == 'd' || s == 'i')
		return (print_int(va_arg(args, int), 1));

	return (0);
}
