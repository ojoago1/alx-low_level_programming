#include <stdio.h>
/**
 * main - storing address of variable into a pointer
 *
 * Return: 0.
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("address of 'n': %p\n", &n);
	printf("address of 'p': %p\n", p);
	return (0);
}
