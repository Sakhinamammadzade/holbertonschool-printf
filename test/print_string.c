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
        int size = 0;

        while (s[size])
        {
                size++;
        }
        if (s != NULL)
        {
                z += write(1, s, size);
        }
        return(z);
}
