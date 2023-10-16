#include "main.h"
/**
 * reverse_print - prints reversed string
 *
 * @s: the string to reverse
 *
 * Return: reversed string
 */
int reverse_print(char *s)
{
	int i = 0;
	int length = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		i++;
		length = i;
	}

	for (i = length - 1; i >=0; i--)
	for (i = length - 1; i >= 0; i--)
		write(1, &s[i], 1);
	return (length);
}
