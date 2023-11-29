#include "main.h"
#include <unistd.h>
/**
 * print_string - print string
 * @z: leng
 * @s: character
 * Return: leng
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
		r = r + 6;
	}
	else
	{
		while (*(s + i) != '\0')
		{
			_putchar(*(s + i));
			i++;
			r++;
		}
	}
    return (r);
}
