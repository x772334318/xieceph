#include <stdio.h>

main(){
	int c,ns,nt,nn;

	ns = nt  = nn = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++ns;
		else if(c == '\t')
			++nt;
		else if(c == '\n')
			++nn;
	}
	printf("%4d%4d%4d\n",ns,nt,nn);
}