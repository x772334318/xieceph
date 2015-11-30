/*
 *Author: YuQian Xie <772334318@qq.com>
 *Date: Nov 30.2015
 *File: 6.c
 *
 *Write a function setbits(x,p,n,y) that returns x with 
 *the n bits that begin at position p set to the rightmost 
 *n bits of y, leaving the other bits unchanged. 
 */
#include<stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

main()
{
	unsigned int x, y, p, n;

    printf("�������ַ���x��y: ");
    scanf("%u %u", &x, &y);
    printf("��������ʼλ: ");
    scanf("%d", &p);
    printf("�������滻��λ��: ");
    scanf("%d", &n);
    printf("�滻���xΪ: %u\n", setbits(x, p, n, y));
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	x = x & ~(~(~0 << n) << (p - n + 1));
	y = y & ~(~0 << n) << (p - n + 1);
	return x | y;
}

