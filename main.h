#ifndef _MAIN_H_
#define _MAIN_H_
#define BUFF_SIZE 1024

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *c);
int _strlen(char *s);
int prnt_func(va_list args, char s);
int print_int(int n, int sign);

#endif
