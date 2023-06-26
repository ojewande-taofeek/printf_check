
#ifndef MAIN_H
#define MAIN_H

/* HEADER FILES */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* FUNCTIONS PROTOTYPES */

int _printf(const char *format, ...);
int _putchar(char s);
int print_str(char *s);
void print_digit(int n);
/* SYMBOLIC CONSTANTS */

#define DIV_INIT 1
#define DIV_CHECK (10)
#define DIV_MIN (0)


#endif /* MAIN_H */
