/*
 *Author: YuQian Xie <xieceph@163.com>
 *Date: Nov 7.2015
 *File: 2.c
 *
 *Write a function escape(s,t) that converts characters like 
 *newline and tab into visible escape sequences like \n and 
 *\t as it copies the string t to s . Use a switch . Write a 
 *function for the other direction as well, converting escape 
 *sequences into the real characters. 
 */
#include<stdio.h>
#define MAXLEN 1024

void escape(char s[], char t[]);
void unescape(char s[], char t[]);

main()
{
	char s[MAXLEN];

    char t[50] = "Hello,\tWorld! \nMistakee \twas Extra 'e'!\n";
	printf("%s\n",t);
	escape(s, t);
	printf("转换为可见的字符串为：%s\n",s);
	unescape(s,t);
	printf("转换为实际字符为：%s\n",s);
}

void escape(char s[], char t[])
{
	int i, j;
	i = j = 0;

	while (t[i])
	{
		switch(t[i])
		{
			case '\t': 
				s[j++] = '\\';
				s[j] = 't';
				break;
			case '\n':
				s[j++] = '\\';
				s[j] = 'n';
				break;
			default :
				s[j] = t[i];
				break;
		}
		i++;
		j++;
	}
	s[j] = t[i];
	s[++j] = '\0';
}

void unescape(char s[], char t[])
{
	int i , j ;
	i = j = 0; 
	while(t[i])
	{
		if(t[i] == '\\')
		{
			switch (t[i])
			{
				case 't':
					s[j++] = '\t';
					break;
				case 'n':
					s[j++] = '\n';
					break;
				default:
					s[j] = t[i];
					break;
			}
		}else
		{
			s[j] = t[i];
		}
		i++;
		j++;
	}
	s[++j] = '\0';
}