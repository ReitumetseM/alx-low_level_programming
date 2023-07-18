#include <stdio.h>
/**
 * main - 'A program that prints the size of various types on computer'
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
prinf("Size of a char:%lu bytes\n", sizeof(a));
printf("size of an int:%lu bytes\n", sizeof(b));
printf("size of a long int:%lu bytes\n", sizeof(c));
printf("size of a long long int:%lu bytes\n", sizeof(d));
printf("size of a float:%lu bytes\n", sizeof(f));
return (0);
}
