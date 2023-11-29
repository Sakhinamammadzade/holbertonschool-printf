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
        if (!c && c != '\0')
        {
                write(1, &c, 1);
                z++;
        }
        return(z);
}
