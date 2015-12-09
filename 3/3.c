/*
 *Author: YuQian Xie <xieceph@163.com>
 *Date: Dec 8.2015
 *File: 3.c
 *
 *Write a function expand(s1,s2) that expands shorthand notations 
 *like a-z in the string s1 into the equivalent complete list 
 *abc...xyz in s2 . Allow for letters of either case and digits, 
 *and be prepared to handle cases like a-b-c and a-z0-9 and -a-z . 
 *Arrange that a leading or trailing - is taken literally.
 */
#include<stdio.h>
#define MAXLEN 1024

void expand(char s1[], char s2[]);

main()
{
	char s1[MAXLEN], s2[MAXLEN];

	printf("ÇëÊäÈë×Ö·û´®£º");
	scanf("%s",&s1);
	expand(s1, s2);
	printf("%s\n", s2);

	return 0;
}

void expand(char s1[],char s2[])
{
	int i, j, n;

	i = j = 0;
	n = 1;
	while (s1[i] != '\0') 
	{
		if (((s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= 'A' && s1[i] <= 'Z') || (s1[i] >= '0' && s1[i] <= '9')) && s1[i+1] == '-')
		{
			s2[j] = s1[i];
			while (s2[j] < s1[i+2])
			{
				j++;
				s2[j] = s1[i] + n;
				n++;
			}
			n = 1;
			i += 2;
		}
		else
		{
			s2[j] = s1[i];
		}
		i++;
		j++;
	}
	s2[j++] = '\0';
}
