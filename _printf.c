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
	unsigned int j = 0, z = 0;

	va_list ar;

	va_start(ar, format);

	for (j = 0; (*(format + j)) != '\0'; j++)
	{
		if (*(format + j + 1) != '\0')
		{
			z++, _putchar (*(format + j));
		}
		else if (*(format + j) == '%' && *(format + j + 1) == '\0')
			continue;
		else if (*(format + j) == '%' && *(format + j + 1) == '%')
		{
			z++, j++, _putchar('%');
		}
		else if (*(format + j) == '%' && *(format + j + 1) != 'c' &&
				*(format + j + 1) != 's')
		{
			z++, _putchar (format[j]);
		}
		else if (*(format + j) == '%' && *(format + j + 1) != 'c')
		{
			z = print_char(z, va_arg(ar, int));
			j++;
		}
		else if (*(format + j) == '%' && *(format + j + 1) != 's')
		{
			z = print_string(z, va_arg(ar, char *));
			j++;
		}
	}
	return (z);
}
/**
 * main - print string
 *
 * Return: letter count
 */

int main(void)
{
	int len;
	int  len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("%d %d\n", len, len2);
	return (0);
}
