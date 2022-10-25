#include <stdio.h>
 
/**
 * main - addresses of variables
 *
 * Return: Always 0.
 */
int main(void)
{
	char a;
	int b;
	float c;

	printf("Address of variable 'a': %p\n", &a);
	printf("Address of variable 'b': %p\n", &b);
	printf("Address of variabke 'c': %p\n", &c);
	return (0);
}

