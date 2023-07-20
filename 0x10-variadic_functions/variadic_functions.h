#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void p_char(int c, char *separator);
void p_integer(int i, char *separator);
void p_float(double f, char *separator);
void p_str(char *s, char *separator);
void print_all(const char * const format, ...);


#endif /* VARIADIC_FUNCTIONS_H */
