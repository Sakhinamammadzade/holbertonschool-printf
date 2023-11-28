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
		write(1, &s[z], 1);
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
