#ifndef MAIN_H
#define MAIN_H


/* Libraries */

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


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


/* _printf functions */

void print_char(va_list ap, unsigned int *num_char);
void print_string(va_list ap, unsigned int *num_char);
int _printf(const char *format, ...);


#endif
