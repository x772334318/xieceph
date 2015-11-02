#include <stdio.h>

main(){
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			printf("\\t");
		}
		else if (c == '\\')
		{
			printf("\\");
		}
		else if (c == '\b')
		{
			printf("\\b");
		}
		putchar(c);
	}
	printf("\n");
}