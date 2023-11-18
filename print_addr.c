#include "main.h"

/**
 * print_addr - This function prints the address of a pointer.
 * @ap: It's the argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 * Return: None.
 */
void print_addr(va_list ap, unsigned int *num_char)
{
	void *addr = va_arg(ap, void *);

	*num_char += _printf("0x") + _printf("%x", addr);
}
