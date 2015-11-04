/*
 * Author: YuQian Xie <772334318@qq.com>
 * Date:   Nov 4, 2015
 * File:   18.c
 *
 * Write a program to remove all trailing blanks and 
 *tabs from each line of input, and to delete entirely blank lines. 
 */
#include <stdio.h>
#define MAXLINE 1000    /*允许输入的最大长度*/

int getline(char line[], int maxline);  /*将一行读入到s并返回其长度*/
void copy(int len, char to[], char from[]);  /*打印输入行*/

main(){
	int len;
	char line[MAXLINE];   /*当前的输入行*/
	char newline[MAXLINE];   /*变形后的行*/

	while ((len = getline(line, MAXLINE)) > 0)
	{
		copy(len, newline, line);
		if (newline[0] != '\0')
			printf("%s",newline);
	}
	return 0;
}

int getline(char s[], int lim)
{
	int c,i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(int len, char to[], char from[])
{
	int i,j,k;

	k = 0;

	for (i = len; i >= 0; --i)
	{
		if (from[i-1] == ' ' || from[i-1] == '\t')
			continue;
		else
		{
			j = i;
			break;
		}
	}
	
	while (k == j)
	{
		to[k] = from[k];
		++k;
	}
}



