/*
 *Author: YuQian Xie <xieceph@163.com>
 *Date: Dec 10,2015
 *File: 4.c
 *
 *In a two's complement number representation, our version of itoa 
 *does not handle the largest negative number, that is, the value of 
 *n equal to -(2 to the power (wordsize - 1)) . Explain why not. 
 *Modify it to print that value correctly regardless of the machine on which it runs. 
 */
#include <stdio.h>
#include <limits.h>
#define MAXLEN 1024

void itoa1(int n, char s[]);
void reverse(char s[]);

main ()
{
	char s[MAXLEN];
    
    printf("INT_MAX: %d\n", INT_MAX);
    itoa1(INT_MAX, s);
    printf("Buffer : %s\n", s);
	printf("INT_MIN: %d\n", INT_MIN);
    itoa1(INT_MIN, s);
    printf("Buffer : %s\n", s);
    
    return 0;

}

void itoa1(int n ,char s[])
{
	int i, sign;

	i = 0;
	sign = n;
	do {
		s[i++] = abs(n % 10) + '0';
	} while (n /= 10);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

void reverse(char s[])
{
	int c, i, j;
    for ( i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
	}
}
