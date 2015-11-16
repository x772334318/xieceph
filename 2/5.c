/*
 *Author: YuQian Xie <772334318@qq.com>
 *Date: Nov 16.2015
 *File: 5.c
 *
 *Write the function any(s1,s2) , which returns the first location in the string s1 where any 
 *character from the string s2 occurs, or -1 if s1 contains no characters from s2 . 
 *(The standard library function strpbrk does the same job but returns a pointer to the location.) 
 */

#include<stdio.h>

int any(char s1[], char s2[])
{
	int i,j;
	
	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] == s2[j])
				return s1[i];
		}
	}
	return -1;
}

main()
{
	char s[100], t[100];

	printf("请输入一个字符串:");
	scanf("%s", s);
	printf("请输入第二个字符串:");
	scanf ("%s", t);

	printf("返回的值：%c\n", any(s,t));

}