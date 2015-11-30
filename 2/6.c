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

    printf("请输入字符串x与y: ");
    scanf("%u %u", &x, &y);
    printf("请输入起始位: ");
    scanf("%d", &p);
    printf("请输入替换的位数: ");
    scanf("%d", &n);
    printf("替换后的x为: %u\n", setbits(x, p, n, y));
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	x = x & ~(~(~0 << n) << (p - n + 1));
	y = y & ~(~0 << n) << (p - n + 1);
	return x | y;
}

