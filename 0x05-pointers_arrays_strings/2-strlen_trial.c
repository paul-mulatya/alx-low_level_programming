#include "main.h"

// Prints the length of a string
//IT WORKS!

int main(void)
{
	char *str;
	str = "my first strlen";

	int length = 0;
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		length ++;
	printf("%d\n", length);
	return (0);
}
			

