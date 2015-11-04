/*
 * Author: YuQian Xie <772334318@qq.com>
 * Date:   Nov 4, 2015
 * File:   16.c
 *
 *Revise the main routine of the longest-line 
 *program so it will correctly print the length 
 *of arbitrarily long input lines, and as much as possible of the text.
 */
#include <stdio.h>
#define MAXLINE 1000 /*���������е���󳤶�*/

int getline(char line[], int maxline); /*��ȡ�����еĳ��Ȳ�����*/
void copy(char to[],char from[]);  /*��ӡ���������*/

main(){
	int len;     /*��ǰ�еĳ���*/
	int max;     /*ĿǰΪֹ���ֵ���еĳ���*/
	char line[MAXLINE];  /*��ǰ������*/
	char longest[MAXLINE];  /*���ڱ��������*/

	max = 0;
	while ((len = getline(line ,MAXLINE )) > 0 )
		if (len > max){
			max = len;
			copy (longest, line);
		}
	if (max > 0)
		printf("the lenth of max line is %d,the line is \n%s",max,longest);
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

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}