/*
 *Author: YuQian Xie <772334318@qq.com>
 *Date: Nov 11.2015
 *File: 3.c
 *
 *Write the function htoi(s) , which converts a string of hexadecimal 
 *digits (including an optional 0x or 0X) into its equivalent integer value. 
 *The allowable digits are 0 through 9, a through f, and A through F . 
 */

#include <stdio.h>

int htoi(char c[]);

main()
{
	char c[100];

	printf("������һ��ʮ����������");
	scanf("%s", c);
	printf("\nʮ��������Ϊ��%s \nת�����������Ϊ��%d\n", c, htoi(c));
}

int htoi(char c[])
{
	int i, n;

	i = 0;
	n = 0;

	if (c[0] == '0' && c[1] == 'x' || c[1] == 'X')           //�ж��Ƿ���ǰ׺
	{
		i=2;
	}

	while (c[i] != '\0')
	{
		if (c[i] >= '0' && c[i] <= '9')
		{
			n = n * 16 + c[i] - '0';
		}
		else if (c[i] >= 'a' && c[i] <= 'f')
		{
			n = n * 16 + c[i] - 'a' + 10;
		}
		else if (c[i] >= 'A' && c[i] <= 'F')
		{
			n = n * 16 + c[i] - 'A' + 10;
		}
		++i;
	}
	return n;
}