#include "main.h"

/**
 * flags - This function produces output according to a format.
 * @format: It's a pointer to a character string.
 * @ap: It's the argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 * Description: The output that this function produces is given by the format
 * character string. The format string is composed of zero or more directives.
 *
 * Return: An integer number representing the number of characters printed
 * (excluding the null byte used to end output to strings).
 */
const char *flags(const char *format, va_list ap, unsigned int *num_char)
{
	const char *ptr = format;
	unsigned int i;
	Flags flag[] = {{"+", flag_sum}, {" ", flag_space}, {"#", flag_hash},
		{NULL, NULL}};

	/*(void) ap;*/
	if (ptr == NULL || *ptr == '\0')
		return (NULL);
	if (*ptr != '\0')
	{
		i = 0;
		while (flag[i].type != NULL && *ptr != *flag[i].type)
			i++;
		if (flag[i].type != NULL)
		{
			ptr = flag[i].f(ptr, ap, num_char);
		}
		else
		{
			write(1, ptr - 1, 2);
			*num_char += 2;
		}
	}
	return (ptr);
}
