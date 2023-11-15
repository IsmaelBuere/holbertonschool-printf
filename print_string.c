#include "main.h"

/**
 * print_string - Prints a string
 * @ap: Argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 */
void print_string(va_list ap, unsigned int *num_char)
{
	char *string = va_arg(ap, char*);
	int length = 0;
	const char *chain = "(null)";

	if (string != NULL)
	{
		while (string[length] != '\0')
			length++;
		write(1, string, length);
		*num_char += length;
	}
	else
	{
		write(1, chain, 6);
		*num_char += 6;
	}
}
