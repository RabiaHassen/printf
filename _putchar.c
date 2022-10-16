#include <unistd.h>
/**
 * -putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: 1 for success
 * On Error: -1 is returned, the errno is set appropriately
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
