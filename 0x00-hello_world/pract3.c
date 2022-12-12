#include <stdio.h>
/**
 * main - function that prints size
 *
 * Return: 0;
 */
int main(void)
{
	int n;


	printf("size of type 'char': %lu bytes\n", sizeof(char));
	printf("size of type 'int': %lu bytes\n", sizeof(int));
	printf("size of type 'float': %lu bytes\n", sizeof(float));
	printf("size of type variable 'n': %lu bytes\n", sizeof(n));
	return (0);
}
