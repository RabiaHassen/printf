#include "main.h"
/**
 *_pow - calculates an exponent
 *@base: base of exponent
 *@exponent: exponent of number
 *Return: base^exponent
 */
static unsigned long _pow(unsigned int base, unsigned int exponent)
{
	unsigned int i;
	unsigned long ans = base;

	for (i = 1; i < exponent; i++)
	{
		ans *= base;
	}
	return (ans);
}

 /**
  * print_hex - prints an unsigned int in decimal form
  * @n: unsigned int to print
  * @c: flag to determine case printing
  * printing (0 = lower and 1 = upper)
  * Return: number of digits printed
  */
int print_hex(unsigned int n, unsigned int c)
{
	unsigned int a[8];
	unsigned int i, m, sum;
	char diff;
	int count;

	m = 268435456; /*(16^7)*/

	if (c)
		diff = 'A'-':';
	else
		diff = 'a'-':';
	a[0] = n / m;
	
	for (i = 1; i < 8; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0, count = 0;


