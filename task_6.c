#include "main.h"

/**
 * pointer_print - print the adress of a pointer
 *
 * @pointer:  pointer
 *
 * Return: length of printed characters
 */

int pointer_print(void *pointer)
{
	int len = 0;
	unsigned long int p = (unsigned long int) pointer;

	if (pointer == NULL)
		return (write(1, "(nil)", 5));
	len += write(1, "0x", 2);
	len += _print_number(p, 'x', 0);
	return (len);

}
