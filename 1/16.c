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
#define MAXLINE 1000 /*允许输入行的最大长度*/

int getline(char line[], int maxline); /*读取输入行的长度并返回*/
void copy(char to[],char from[]);  /*打印最长的输入行*/

main(){
	int len;     /*当前行的长度*/
	int max;     /*目前为止发现的最长行的长度*/
	char line[MAXLINE];  /*当前的输入*/
	char longest[MAXLINE];  /*用于保存最长的行*/

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