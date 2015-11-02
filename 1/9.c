#include <stdio.h>

main(){
	int c, space;

	space = 0;

	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			if(space == 0)
			{
				space = 1;
				putchar(c);
			}
		}
		else
		{
			space = 0;
			putchar(c);
		}
	}
	printf("\n");
}
