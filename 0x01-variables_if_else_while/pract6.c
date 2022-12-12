#include <stdio.h>
/**
 * main -  function that prints numbers in base 16
 *
 * Return: 0.
 */
int main(void)
{
	char v;

	for (v = 0 ; v <= 9 ; v++)
	{
		putchar(v);
	}
	for (v = 'a' ; v <= 'f' ; v++)
	{
		putchar(v);
	}
	putchar('\n');
	return (0);
}
