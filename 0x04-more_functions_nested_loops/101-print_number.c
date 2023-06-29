#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: The integer to be printed.
 */

void print_number(int n)
{
	unsigned int num = n;

	/*First check if its negtive*/
	if (n < 0)
	{
		_putchar('_');
		num = -unm;
	}

	/*print the first few digits*/
	if ((num / 10) > 0)
		print_number(num / 10)

			/*print the last digit*/
			_putchar((num % 10) + 48);
}
