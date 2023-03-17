#include <stdio.h>

/**
  * main-for
  *Return: 0
  */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
	int  i;

	for (i = 0; i < 52; i++)
		putchar(alpha[i]);
	putchar("\");
	return (0);
}

