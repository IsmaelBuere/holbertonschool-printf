#include "main.h"

/**
 * print_hex - This function prints an unsigned integer number converted to
 * hexadecimal.
 * @ap: It's the argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 * Return: None.
 */
void print_hex(va_list ap, unsigned int *num_char)
{
	unsigned long int number = va_arg(ap, unsigned int), rest;
	unsigned long int num_of_digits, i = 0;
	char str[30];

	while (number >= 16)
	{
		rest = number % 16;
		if (rest < 10)
			str[i] = rest + '0';
		else
			str[i] = rest + 87;
		number /= 16;
		i++;
	}
	if (number < 10)
		str[i] = number + '0';
	else
		str[i] = number + 87;
	num_of_digits = i + 1;
	reverse_array(str, num_of_digits);
	write(1, str, num_of_digits);
	*num_char += num_of_digits;
}
