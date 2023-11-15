#include "main.h"

/**
 * print_char - Prints a char.
 * @ap: Argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 */
void print_char(va_list ap, unsigned int *num_char)
{
	char character = va_arg(ap, int);

	write(1, &character, 1);
	(*num_char)++;
}
