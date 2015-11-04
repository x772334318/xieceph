/*
 * Author: YuQian Xie <772334318@qq.com>
 * Date:   Nov 4.2015
 * File:   17.c
 *
 * Write a program to print all input lines that are longer than 80 characters. 
 */
#include <stdio.h>
#define MAXLINE 1000 /*���������е���󳤶�*/

int getline(char line[], int maxline); /*��ȡ�����еĳ��Ȳ�����*/

main(){
	int len;     /*��ǰ�еĳ���*/
	char line[MAXLINE];  /*��ǰ������*/

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
