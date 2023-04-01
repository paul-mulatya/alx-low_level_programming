#include <stdio.h>

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";

    while (*str != '\0')
	   printf("%c", *str);
    	   str++;
    printf("\n");
    return (0);
}
