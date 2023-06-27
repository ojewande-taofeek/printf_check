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

     char *str = "This is a test";
     _printf("Let's try to printf a simple sentence.\n");
     printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%%, %s]\n", str);
    printf("Length:[%%, %s]\n", str);

    return (0);
}
