#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

     char *str = NULL, k = 'T';
     _printf("Let's try to printf a simple sentence.\n");
     printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%%, %s, %c]\n", str, k);
    printf("Length:[%%, %s, %c]\n", str, k);
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    return (0);
}
