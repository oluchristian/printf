#ifndef _MAIN_H_
#define _MAIN_H_
#define BUFFER_SIZE 1024

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *c);
int prnt_func(va_list args, char s);

#endif
