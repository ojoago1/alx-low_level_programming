#include <stdio.h>
/**
*main - print if the number is positive, negative or zero
*
*Description: a program that prints all possible combinations of single-digit numbers
*Return: 0
*/
int main(void)
{
int c;
for (c = 48; c <= 57; c++)
{
	putchar(c);
	if (c != 57)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
