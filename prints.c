#include "main.h"

/**
 * printf_string - prints a string
 * @val: argument
 * Return: length of string
 */
int printf_string(va_list val)
{
	char str;
	int x, len;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(NULL)";
		len = _strlen(str);
		for (x = 0; x < len; x++)
			_putchar(str[x]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (x = 0; x < len; x++)
			_putchar(str[x]);
		return (len);
	}
}
