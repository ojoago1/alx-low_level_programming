#include <stdio.h>
/**
 * main - checking type sizes
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	printf("size of type 'char' on my computer: %lu\n", sizeof(char));
	printf("size of type 'int' on my computer: %lu\n", sizeof(int));
	printf("size of type 'float' on my computer: %lu\n", sizeof(float));
	printf("size of type variable on my comuter: %lu\n", sizeof(n));
	return (0);
}
