#ifndef MAIN_H
#define MAIN_H


/* Libraries */

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>


/* Structure Definition */

/**
 * struct print - print
 * @type: The operator.
 * @f: The function associated.
 */
typedef struct print
{
	char *type;
	void (*f)(va_list ap, unsigned int *num_char);
} print_type;


/* Functions */

void reverse_array(char *a, int n);
void print_char(va_list ap, unsigned int *num_char);
void print_string(va_list ap, unsigned int *num_char);
void print_int(va_list ap, unsigned int *num_char);
void print_bin(va_list ap, unsigned int *num_char);
void print_uint(va_list ap, unsigned int *num_char);
void print_oct(va_list ap, unsigned int *num_char);
void print_hex(va_list ap, unsigned int *num_char);
void print_hex_upper(va_list ap, unsigned int *num_char);
int _printf(const char *format, ...);


#endif
