#include <stdio.h>

#define IN 1
#define OUT 0

main(){
	int c,state;

	state = IN;
	while ((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\t' || c == '\n')
		{
			if(state == IN)
			{
				state = OUT;
				printf("\n");
			}
		}
		else
		{
			state = IN;
			putchar(c);
		}
	}
}