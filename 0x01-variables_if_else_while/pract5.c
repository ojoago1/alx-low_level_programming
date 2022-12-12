#include <stdio.h>
/**
 * main - function that print numbers in base 10
 *
 * Description: using main function to print base 10 numbers
 * Return: 0.
 */
int main(void)
{
	int n;

	for (n = 48 ; n < 58 ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
