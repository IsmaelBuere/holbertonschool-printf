#include "main.h"

/**
 * print_hex2 - This function prints an unsigned long integer number converted
 * to hexadecimal.
 * @number: It's the number to convert.
 *
 * Return: None.
 */
unsigned int print_hex2(unsigned long int number)
{
	unsigned long int rest;
	unsigned int num_of_digits, i = 0;
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
	return (num_of_digits);
}

/**
 * print_addr - This function prints the address of a pointer.
 * @ap: It's the argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 * Return: None.
 */
void print_addr(va_list ap, unsigned int *num_char)
{
	unsigned long int addr = va_arg(ap, unsigned long int);

	if (addr)
		*num_char += _printf("0x") + print_hex2(addr);
	else
		*num_char += _printf("(nil)");
}
