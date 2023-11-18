#include "main.h"

/**
 * non_print_char - Prints a string with a non printable characters.
 * @ap: Argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 * Description: This function use a custom conversion specifier: S - prints
 * the string. Non printable characters (0 < ASCII value < 32 or >= 127) are
 * printed this way: \x, followed by the ASCII code value in hexadecimal
 * (upper case - always 2 characters).
 *
 */
void non_print_char(va_list ap, unsigned int *num_char)
{
	char *string = va_arg(ap, char*);
	int i = 0;
	const char *chain = "(null)";

	if (string != NULL)
	{
		while (string[i] != '\0')
		{
			if (string[i] < 32 || string[i] >= 127)
			{
				write(1, "\\x", 2);
				*num_char += 2;
				if (string[i] < 16)
				{
					_printf("%d", 0);
					_printf("%X", string[i]);
				}
				else
					_printf("%X", string[i]);
			}
			else
			{
				write(1, &string[i], 1);
				(*num_char)++;
			}
			i++;
		}
	}
	else
	{
		write(1, chain, 6);
		*num_char += 6;
	}
}
