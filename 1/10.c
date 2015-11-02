#include <stdio.h>

int main(void){
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			printf("\\t");
		}
		if (c == '\\')
		{
			printf("\\");
		}
		if (c == '\b')
		{
			printf("\\b");
		}
		putchar(c);
	}
	printf("\n");
}