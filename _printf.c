#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>
#include "main.h"
/**
 * _printf - print string
 * @format: format
 * Return: letter count
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	unsigned int say = 0, i = 0, j = 0, r = 0;
	va_start(ptr, format);
	for ( j = 0; *(format + j) != '\0'; j++)
	{
		if (*(format + j) != '%')
		{
			r++, _putchar(*(format + j));
		}
		else if (*(format + j) == '%' && *(format + j + 1) == 'c')
		{
			r = print_char(r, va_arg(ptr, int));
			j++;
		}
		else if (*(format + j) == '%' && *(format + j + 1) == 's')
		{
			r = print_string(r, va_arg(ptr, char *));
			j++;
		}
		else if (*(format + j) == '%' && (*(format + j + 1) == 'd') || *(format + j + 1) == 'i')
		{
			r = print_decimal(r, va_arg(ptr, int));
			j++;
		}
		else
		{
			r++, _putchar(*(format + j));
		}
	}
	return (r);
}
