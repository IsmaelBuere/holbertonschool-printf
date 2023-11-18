#include "main.h"

/**
 * print_uint - This function prints an unsigned integer number.
 * @ap: It's the argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 * Return: None.
 */
void print_uint(va_list ap, unsigned int *num_char)
{
	unsigned int number = va_arg(ap, unsigned int), num_of_digits, i = 0, aux = 0;
	char str[20];

	if (number == 0)
	{
		write(1, "0", 1);
		(*num_char)++;
		return;
	}
	while (number > 0)
	{
		if (aux == 1)
		{
			str[0] = 8 + '0';
			aux = 0;
		}
		else
			str[i] = number % 10 + '0';
		number /= 10;
		i++;
	}
	num_of_digits = i;
	reverse_array(str, num_of_digits);
	write(1, str, num_of_digits);
	*num_char += num_of_digits;
}
