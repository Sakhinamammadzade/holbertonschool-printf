#include "main.h"
/**
 * print_string - print string
 * @z: leng
 * @s: character
 * Return: leng
 */
int print_string(unsigned int z, char *s)
{
    unsigned int i = 0;
    while(s[z] != '\0')
    {
        _putchar(s[z] + 1);
        i++;
        z++;
    }
    return(z);
}
