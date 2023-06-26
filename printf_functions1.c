#include "main.h"

int _putchar(char s);
int print_str(char *s);
void print_digit(int n);

/**
 * _putchar - The function that prints characters
 * @s: The formal parameter of s
 * Return: Each character
 */

int _putchar(char s)
{
	return (write(1, &s, 1));
}


/**
 * print_str - The function that prints string
 * @s: The pointer to a string constant
 * Return: The string length
 */

int print_str(char *s)
{
	int idx = 0, len = 0;

	while (s[idx])
	{
		_putchar(s[idx]);
		idx++;
		len++;
	}
	return (len);
}

/**
 * print_digit - The function prints numbers
 * @n: The number to be printed
 * Return: Nothing.
 */

void print_digit(int n)
{
	int div = DIV_INIT;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while ((n / div) >= DIV_CHECK)
		div *= DIV_CHECK;
	while (div > DIV_MIN)
	{
		_putchar((n / div) + '0');
		n %= div;
		div /= DIV_CHECK;
	}
}
