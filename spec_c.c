#include "main.h"

/**
 * spec_c - prints a character
 * @args: arguments list
 *
 * Return: 1 character
 */
int spec_c(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
