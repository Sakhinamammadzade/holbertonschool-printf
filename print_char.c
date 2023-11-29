#include "main.h"
#include <unistd.h>
/**
 * print_char - print char
 * @z: leng
 * @c: character
 * Return: leng
 */
int print_char(unsigned int z, char c)
{
	if (!c)
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
		_putchar(c);
		z++;
	}
	return (z);
}
