#include "main.h"

/**
  * _puts - function that prints strings
  *
  * @c: pointer to string
  *
  * Return: number of bytes
  */
int _puts(char *c)
{
	int i = 0;

	if (c)
	{
		for (i = 0; c[i] != '\0'; i++)
		{
			return (_putchar(c[i]));
		}
	}
	return (0);
}
