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
	if (!c)
		c = "(null)";
	return (write(1, c, _strlen(c)));
}
