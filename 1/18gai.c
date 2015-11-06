/*
 * Author: YuQian Xie <772334318@qq.com>
 * Date:   Nov 6, 2015
 * File:   18gai.c
 *
 * Write a program to remove all trailing blanks and 
 * tabs from each line of input, and to delete entirely blank lines.
 * second
 */
#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
int remove(char s[]);

main()
{
	char line[MAXLINE];

	while (getline(line, MAXLINE) > 0)
	{
		if (remove(line) > 0)
		{
			printf("%s",line);
		}
	}
	return 0;
}

int getline(char line[],int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n' ; ++i)
	{
		line[i] = c;
	}
	if (c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

int remove(char s[])
{
	int i;

	i = 0;
	while (s[i] != '\n')
	{
		++i;
	}
	--i;
	while (i >=0 && s[i] == '\t' || s[i] == ' ')
	{
		--i;
	}
	if (i >= 0)
	{
		++i;
		s[i] = '\n';
		++i;
		s[i] = '\0';
	}
	return i;
}
