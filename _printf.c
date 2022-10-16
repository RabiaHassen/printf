#include "main.h"

/**
 * _printf - prints to stdout
 * @format: a character string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int charnum = 0;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		while (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					charnum += spec_c(args);
					i += 2;
					break;
				case 's':
					charnum += spec_s(args);
					i += 2;
					break;
				case '%':
					_putchar('%');
					charnum++;
					i += 2;
					break;
				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
					i += 2;
			}
		}

		if (format[i])
		{
			_putchar(format[i]);
			charnum++;
		}

		i++;
	}
	va_end(args);

	return (charnum);
}
