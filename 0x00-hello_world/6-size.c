#include <stdio.h>

int main(void)
{
	char a;
	int number;
	long int num;
	long long int n;
	float decimal;

	printf("Size of a char: %c byte(s)\n", sizeof(a));
	printf("Size of an int: %d bytes(s)\n", sizeof(number));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(num));
	printf("Size of a long long int: %lld bytes(s)\n", sizeof(n));
	printf("Size of a float: %f bytes(s)\n", sizeof(decimal));
	return (0);
}
