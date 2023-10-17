#include "main.h"

/**
 * printf_char - prints char
 * @val: arguments
 * Return: 1
 */
int printf_char(va_list val)
{
	char x;

	x = val_arg(val, int);
	_putchar(x);
	return (1);
}
