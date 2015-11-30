/*
 *Author: YuQian Xie <772334318@qq.com>
 *Date: Nov 30.2015
 *File: 8.c;
 *
 *Write a function rightrot(x,n) that returns the value of 
 *the integer x rotated to the right by n bit positions. 
 */
#include<stdio.h>

unsigned rightrot(unsigned x, int n);
int wordlength(unsigned x);

main()
{
	unsigned int x, n;

	printf("�������ַ���x: ");
    scanf("%u", &x);
    printf("�������滻��λ��: ");
    scanf("%d", &n);
    printf("�滻���xΪ: %u\n", rightrot(x, n));
}

unsigned rightrot(unsigned x, int n)
{
	unsigned int i, temp;
	
	temp = x & (~0 << n);
	x = x >> n;
	i = wordlength(x);
	x = (temp << (i-2)) | (x & 1);
	return x;
}

int wordlength(unsigned x)
{
	int i = 0;

	while (x != 0 )
	{
		x = x >> 1;
		i++;
	}
	return i;
}