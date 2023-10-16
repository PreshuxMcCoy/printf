#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int  len1;

	printf("Let's try to printf a simple sentence.\n");
	_printf("Let's try to printf a simple sentence.\n");
	printf("Character:[%c]\n", 'H');
	_printf("Character:[%c]\n", 'H');
	printf("String:[%s]\n", "I am a string !");
	_printf("String:[%s]\n", "I am a string !");
	/*len2 = _printf("String:[%s]\n", "I am a string !");*/
	len1 = _printf("String:[%s]\n", "I am a string !");
	printf("Unknown:[%r]\n");
	_printf("Unknown:[%r]\n");
	printf("Percent:[%%]\n");
	_printf("Percent:[%%]\n");
	printf("%d\n", len1);
	/*printf("%d\n", len2);*/
	return (0);
}
