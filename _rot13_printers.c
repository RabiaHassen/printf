#include "main.h"
/**
 * _print_rot13 - prints a string in rot13
 * @args: argument list
 * Return: number of character
 */
int _print_rot13(va_list args)
{
	char *str;
	unsigned int i, j;
	int count = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPSTUVWXYZQR
