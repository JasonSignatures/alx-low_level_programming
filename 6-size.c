#include <stdio.h>

/**
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %1u byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int a: %1u byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int b: %1u byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int c: %1u byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float f: %1u byte(s)\n", (unsigned long)sizeof(f));
	return (0)
}
