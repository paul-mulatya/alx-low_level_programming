#include "main.h"

int main(void)
{
	char *str;

        str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	int i;
	for (i = 0; *(str + i) != 0; i++)
		printf("%c", *(str + i));
	printf("\n");
	return (0);
}
