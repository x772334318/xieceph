#include <stdio.h>

int main(void){
	int c, space;

	space = 0;

	while((c = getchar()) != EOF)
	{
		if(c == ' ')
			if(space == 0)
			{
				space = 1;
				putchar(c);
			}
		if(c != ' ')
		{
			space = 0;
			putchar(c);
		}
	}
	printf("\n");
}
