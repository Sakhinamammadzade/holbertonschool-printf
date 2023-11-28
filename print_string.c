#include "main.h"
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
		z = z + 6;
	}
	else
	{	
		while(s[z] != '\0')
		{
			_putchar(s[z] + 1);
			i++;
			z++;
		}
	}
	return(z);
}
