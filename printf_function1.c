#include "main.h"

int _putchar(char s);
void print_str(char *s);
void print_digit(int n);
void Print_binary(unsigned int n);

int _putchar(char s)
{
	return (write(1, &s, 1));
}

void print_str(char *s)
{
	int idx 0;

	while (s[idx])
	{
		_putchar(s[idx]);
		idx++;
	}
}

void print_digit_(int n)
{
	int div = DIV_INT;

	if (n < 0)
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

void print_bianry(unsigned int n)
{
	if (n > 1)
	print_binary(n / 2);
	_putchar((n % 2) + '0');
}
