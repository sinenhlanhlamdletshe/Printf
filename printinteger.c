#include "main.h"

/**
 * printf_int - prints integer
 * @args: argument
 * Return: characters printed
 */
int printf_int(va_list args)
{
	int z = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int x = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		x++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			x++;
		}
	}
	_putchar(last + '0');
	return (x);
}
#include "main.h"

/**
 * printf_dec - prints decimal
 * @args: argument
 * Return: characters printed
 */
int printf_dec(va_list args)
{
	int z = va_arg(args, int);
        int num, last = n % 10, digit, exp = 1;
        int x = 1;

        n = n / 10;
        num = n;

        if (last < 0)
        {
                _putchar('-');
                num = -num;
                n = -n;
                last = -last;
                x++;
        }
        if (num > 0)
        {
                while (num / 10 != 0)
                {
                        exp = exp * 10;
                        num = num / 10;
                }
                num = n;
                while (exp > 0)
		{
                        digit = num / exp;
                        _putchar(digit + '0');
                        num = num - (digit * exp);
                        exp = exp / 10;
                        x++;
                }
        }
        _putchar(last + '0');
        return (x);
}


