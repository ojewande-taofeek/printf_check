#include "main.h"

/**
 * _printf - The fucntion that prints various inputs of different formats
 * @format: The string supplied to be printed
 * Return: 0, if successful
 */

int _printf(const char *format, ...)
{
	va_list printf_arg;
	int idx = 0, len = 0;
	char character, check, *str;

	if (format == NULL)
		return (-1);
	va_start(printf_arg, format);
	while (format[idx])
	{
		if (format[idx] == '%')
		{
			idx++;
			len++;
			check = format[idx];
			if (check == 'c' || check == '%')
			{
				character = va_arg(printf_arg, int);
				_putchar(character);
				break;
			}
			else if (check == 's')
			{
				str = va_arg(printf_arg, char *);
				print_str(str);
				break;
			}
		}
		else
			_putchar(format[idx]);
		idx++;
		len++;
	}
	va_end(printf_arg);
	return (len);
}
