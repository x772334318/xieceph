#include<stdio.h>
main()
{
	float fahr,celsiue;
	int lower,upper,step;

	lower = -20.0;
	upper = 40.0;
	step = 5.0;

	celsiue = lower;
	while(celsiue <= upper)
	{
		fahr = (9.0/5.0)*celsiue+32;
		printf("%.1f\t%.1f\n",celsiue,fahr);
		celsiue += step;
	}
}