#include "main.h"

/**
 * print_oct - This function prints an unsigned integer number converted to
 * octal.
 * @ap: It's the argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 * Return: None.
 */
void print_oct(va_list ap, unsigned int *num_char)
{
	unsigned int number = va_arg(ap, unsigned int), num_of_digits, i = 0;
	char str[50];

	while (number >= 8)
	{
		str[i] = number % 8 + '0';
		number /= 8;
		i++;
	}
	str[i] = number + '0';
	num_of_digits = i + 1;
	reverse_array(str, num_of_digits);
	write(1, str, num_of_digits);
	*num_char += num_of_digits;
}
