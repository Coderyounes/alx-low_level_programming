#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>

int _putchar(int c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int helper_sqrt(int n, int i);
int _sqrt_recursion(int n);
int is_prime_helper(int n, int i);
int is_prime_number(int n);
int is_palindrome_helper(char *s, int begin, int end);
int is_palindrome(char *s);

#endif /* MAIN_H */
