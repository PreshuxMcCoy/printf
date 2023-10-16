#include "main.h"

/**
 * _rot13 - encodes a string using rot13
 * @s: the string
 * Return: The length
 */

int _rot13(char *s)
{
	int i, j;
	char *A = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *B = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			for (j = 0 ; j < 52; j++)
			{
				if (s[i] == A[j])
				{
					write(1, &B[j], 1);
					break;
				}
			}
		}
		else
			write(1, &s[i], 1);
	}
	return (i);
}
