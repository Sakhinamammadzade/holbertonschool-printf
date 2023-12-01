#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"
/**
 * print_string - something usefull
 * @s: char
 * @z: int
 * Return: letter count
 */
int print_string(unsigned int z, char *s)
{
	int i = 0;

	if (!s)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		z = z + 6;
	}
	else
	{
		while (*(s + i) != '\0')
		{
			_putchar(*(s + i));
			i++;
			z++;
		}
	}
	return (z);
}
/**
 * print_char - something usefull
 * @c: char
 * @z: int
 * Return: letter count
 */
int print_char(unsigned int z, char c)
{
	_putchar(c);
	z++;
	return (z);
}
/**
 * print_decimal - This is the entry point of the code
 * @value - First operand
 ** Return - 0 Successful
 */

int print_decimal(int value)
{
	int i, j;
	char buffer[1000000];
	int printed = 0;

	if (value < 0)
	{
		_putchar('-');
		printed++;
		value = -value;
	}

	i = 0;

	do {
		buffer[i++] = '0' + (value % 10);
		value /= 10;
		printed++;
	} while (value > 0);
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
	}
	return (value);
}
/**
 * _printf - print string
 * @format: format
 * Return: letter count
 */

int _printf(const char *format, ...)
{
	va_list ptr;

	unsigned int j = 0, r = 0;

	if (!format)
	{
		exit(98);
	}
	if (*format == '%' && *(format + 1) == 0)
		exit(98);
	va_start(ptr, format);
	while (*(format + j))
	{
		if (*(format + j) == '%' && *(format + j + 1) == '%')
		{
			_putchar('%'), r++, j += 2;
		}
		else if (*(format + j) == '%' && *(format + j + 1) == 'c')
		{
			r = print_char(r, (char)va_arg(ptr, int)), j += 2;
		}
		else if (*(format + j) == '%' && *(format + j + 1) == 's')
		{
			r = print_string(r, va_arg(ptr, char *)), j += 2;
		}
		else if (*(format + j) == '%' && (*(format + j + 1) == 'd' ||
		*(format + j + 1) == 'i'))
		{
			r = print_decimal(va_arg(ptr, int)), j += 2;
		}
		else
		{
			r++, _putchar(*(format + j)), j++;
		}
	}
	return (r);
}
