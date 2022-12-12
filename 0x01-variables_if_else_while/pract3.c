#include <stdio.h>
/**
 * main - function that prints both lower case and upper case
 *
 * Description: using main function to print alphabets
 * Return: 0.
 */
int main(void)
{
	char let;
	char ch;

	for (let = 'a' ; let <= 'z' ; let++)
	{
		putchar(let);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
