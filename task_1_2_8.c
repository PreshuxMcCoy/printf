#include "main.h"

void test1(void);
/**
 * _print_number - prints the number and the sign
 * @n: the number
 * @spec: the specifer
 * @sign: the sign
 * Return: the length
 */

int _print_number(unsigned long int n, char spec, int sign)
{
	unsigned long int m;
	int count = 0, base_c = 0, index;
	char *specifier = "diuoxX", *num_str;
	int base[6] = {10, 10, 10, 8, 16, 16};

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	while (spec != specifier[base_c])
		base_c++;

	for (m = n; m != 0; count++)
	{
		m = m / base[base_c];
	}

	num_str = malloc(count + sign + 1);
	if (num_str == NULL)
		return (0);

	for (index = count + sign - 1; index >= 0; index--)
	{
		m = n % base[base_c];
		if (spec == 'x' && m >= 10)
			num_str[index] = 'a' + m - 10;
		else if (spec == 'X' && m >= 10)
			num_str[index] = 'A' + m - 10;
		else
			num_str[index] = '0' + m;
		n = n / base[base_c];
	}

	if (sign == 1)
		num_str[0] = '-';

	num_str[count + sign] = '\0';

	_str_num(num_str);

	free(num_str);

	return (count + sign);
}

/**
 * _number - detects the sign
 * @n: the number
 * @spec: the specifier
 * Return: the lenght
 */

int _number(int n, char spec)
{
	int sign = 0;
	unsigned int nn;

	if (n < 0 && (spec == 'd' || spec == 'i'))
	{
		sign = 1;
		nn = -n;
	}
	else
		nn = n;
	return (_print_number(nn, spec, sign));
}

/**
 * _print_binary - prints int as a bianry string
 *
 * @n:  given number as unsigned int
 *
 *Return: number of char to print
 */
int _print_binary(unsigned int n)
{
	int i = 0, j = 0, c = 0;
	char *binary;
	char tmp;
	unsigned int m;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	for (m = n; m; c++)
		m /= 2;
	binary = malloc(sizeof(char) * c);
	if (binary == NULL)
		return (0);
	for (i = 0; i < c; i++)
	{
		binary[i] = (n % 2) + '0';
		n /= 2;
	}
	i--;
	while (j < i)
	{
		tmp = binary[j];
		binary[j] = binary[i];
		binary[i] = tmp;
		j++;
		i--;
	}
	for (i = 0; i < c; i++)
	{
		write(1, &binary[i], 1);
	}
	free(binary);
	return (c);

}
