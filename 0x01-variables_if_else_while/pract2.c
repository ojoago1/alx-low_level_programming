#include <stdio.h>
/**
 * main - function that prints alphabet in lower case
 *
 * Description: using the main function to print lowercase alphabets
 * Return: 0.
 */
int main(void)
{
	char let;

	for (let = 'a' ; let <= 'z' ; let++)
	{
		putchar(let);
	}
	putchar('\n');
	return (0);
}
