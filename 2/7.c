/*
 *Author: YuQian Xie <772334318@qq.com>
 *Date: Nov 30.2015
 *File: 7.c
 *
 *Write a function invert(x,p,n) that returns x with 
 *the n bits that begin at position p inverted (i.e., 
 *1 changed into 0 and vice versa), leaving the others unchanged.
 */
#include<stdio.h>

unsigned invert(unsigned x, int p, int n);

main()
{
	unsigned int x, p, n;

	printf("请输入字符串x: ");
    scanf("%u", &x);
    printf("请输入起始位: ");
    scanf("%d", &p);
    printf("请输入替换的位数: ");
    scanf("%d", &n);
    printf("替换后的x为: %u\n", invert(x, p, n));
}

unsigned invert(unsigned x, int p, int n)
{
	x = x & ~(~(~0 << n) << (p - n +1));
	return x;
}