/*
 * Author: YuQian Xie <772334318@qq.com>
 * Date:   Nov 4.2015
 * File:   17.c
 *
 * Write a program to print all input lines that are longer than 80 characters. 
 */
#include <stdio.h>
#define MAXLINE 1000 /*允许输入行的最大长度*/

int getline(char line[], int maxline); /*读取输入行的长度并返回*/

main(){
	int len;     /*当前行的长度*/
	char line[MAXLINE];  /*当前的输入*/

	while ((len = getline(line ,MAXLINE )) > 0 )
		if (len > 80){
			printf("%s",line);
		}
		
	return 0;
}

int getline(char s[], int lim)
{
	int c, i;

	for (i = 0 ; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
