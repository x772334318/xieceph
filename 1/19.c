/*
 * Author: YuQian Xie <772334318@qq.com>
 * Date:   Nov 6.2015
 * File:   19.c
 *
 * Write a function reverse(s) that reverses the character string s . 
 * Use it to write a program that reverses its input a line at a time. 
 */
#include <stdio.h>
#define MAXLINE 1000

int getline(char line[],int maxline);
void reverse(char line[]);

main()
{
	char line[MAXLINE];

	while (getline(line, MAXLINE) > 0)
	{
		reverse(line);
		printf("%s",line);
	}
}

int getline(char s[],int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
	}
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void reverse(char s[])
{
	int i,j;
	char temp;
	
	i = 0;
	while (s[i] != '\0')
	{
		++i;
	}
	--i;
	j = 0;
	if (s[i] == '\n')
	{
		--i;
	}
	while (j < i)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		++j;
		--i;
	}
}