#include <stdio.h>

int fatocel (int m);
int celtofa (int n);

main(){
	int i;
	
	printf("fahr  celsius\n");
	for(i = 0; i <= 300; i = i+20)
		printf("%d\t%d\n",i,fatocel(i));

	printf("celsius  fahr\n");
	for(i = -15; i <= 30; i = i+5)
		printf("%d\t%d\n",i,celtofa(i));
	
	return 0;
}

int fatocel (int fahr){
	int celsius;

	celsius = 5 * (fahr - 32) / 9;
	return celsius;
}

int celtofa (int celsius){
	int	fahr;

	fahr = celsius * (9.0 / 5.0) + 32;
	return fahr;
}