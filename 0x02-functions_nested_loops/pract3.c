#include "main.h"
/**
 * void print_alphabet - prints alphabet in lower case
 */
void print_alphabet(void)
{
	char let;

	for (let = 'a' ; let <= 'z' ; let++)
	{
		_putchar(let);
		_putchar('\n');
	}
}
