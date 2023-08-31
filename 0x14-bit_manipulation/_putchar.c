#include "main.h"
#include <unistd.h>
/**
 * _putchar - It writes the character c to stdout
 * @c: The character is to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
