#include <stdio.h>
/**
 * main - dereferencing pointers , examples with int and char
 *
 * Return: 0.
 */
int main(void)
{
	int n;
	int *p;
	char c;
	char *pp;

	c = 'H';
	pp = &c;
	n = 98;
	p = &n;

	printf("value of 'c': %d ('%c')\n", c, c);
	printf("address of 'c': %p\n", &c);
	printf("value of 'pp': %p\n", pp);
	printf("value of 'n': %d\n", n);
	printf("address of 'n': %p\n", &n);
	printf("value of 'p': %p\n", p);
	*p = 402;
	*pp = 'o';
	printf("value of 'n': %d\n", n);
	printf("value of '*pp': %d\n", *pp);
	printf("value of 'c': %d ('%c')\n", c, c);
	printf("value of '*pp': %d ('%c')\n", *pp, *pp);
	return (0);
}
