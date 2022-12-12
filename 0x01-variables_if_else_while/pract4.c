#include <stdio.h>
/**
 * main - function that ecxlude e and q from lowercase
 *
 * Description: using main function to ecxlude e and q
 * Return: 0.
 */
int main(void)
{
	char let;

	for (let = 'a' ; let <= 'z' ; let++)
	if (let != 'e' && let != 'q')
	{
		putchar(let);
	}
	putchar('\n');
	return (0);
}

