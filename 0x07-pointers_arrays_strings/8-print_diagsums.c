#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	/*int q = 0;*/
	int i = 0;
	/*int j = 0;*/
	int sum1 = 0;
	/*int sum2 = 0;*/

	for (;i < size; i++)
	{
		printf("%d", *(*a + i) );
		sum1 = sum1 + *(*a + i) ;
	}
/*	for (; j < size; j++)
	{
		printf("%d", *(*(p + j));
		sum2 = sum2 + a[j][q];
		q++;
	} */

	printf("%d", sum1 );
}
