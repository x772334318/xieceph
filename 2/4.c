/*
 *Author: YuQian Xie <772334318@qq.com>
 *Date: Nov 16.2015
 *File: 4.c
 *
 *Write an alternate version of squeeze(s1,s2) 
 *that deletes each character in the string 
 *s1 that matches any character in the string s2 .
 */

#include<stdio.h>

void squeeze(char s[], char t[])
{
	int i,j,n;
	
	n = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; t[j] != '\0'; j++)
		{
			if (s[i] != t[j])
				s[n++] = t[j];
		}
		n = 0;
	}
	s[n] = '\0';
}

main()
{
	char s[100], t[100];

	printf("������һ���ַ���:");
	scanf("%s", s);
	printf("������ڶ����ַ���:");
	scanf ("%s", t);

	squeeze(s, t);

	printf("ɾ������ַ���Ϊ:%s\n", s);

}