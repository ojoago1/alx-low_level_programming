#include <stdio.h>
/**
*main - print if the number is positive, negative or zero
*
*Description: program that prints the lowercase alphabet in reverse
*Return: 0
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
	putchar(c);
}
putchar('\n');
return (0);
}
