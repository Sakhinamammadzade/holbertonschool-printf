#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int print_string(unsigned int z, char *s)
{
        int i = 0;
        if (!s)
        {
                putchar('(');
                putchar('n');
                putchar('u');
                putchar('l');
                putchar('l');
                putchar(')');
                z = z + 6;
        }
        else
        {
                while (*(s + i) != '\0')
                {
                        putchar(*(s + i));
                        i++;
                        z++;
                }
        }
    return (z);
}
int print_char(unsigned int z, char c)
{
        putchar(c);
        z++;
        return (z);
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
                        putchar('%');
                        r++;
                        j += 2;
                }
                else if (*(format + j) == '%' && *(format + j + 1) == 'c')
                {
                        r = print_char(r, (char)va_arg(ptr, int));
                        j += 2;
                }
                else if (*(format + j) == '%' && *(format + j + 1) == 's')
                {
                        r = print_string(r, va_arg(ptr, char *));
                        j += 2;
		}
                else
                {
                        r++, putchar(*(format + j));
                        j++;
                }
        }
        return (r);
}
