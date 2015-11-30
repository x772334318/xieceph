/*
 * Author: YuQian Xie <772334318@qq.com>
 * Date:   Nov 30, 2015
 * File:   9.c
 * 
 * In a two's complement number system, x &.= (x-1) deletes the rightmost l-bit
 * in x. Explain why. Use this observation to write a faster version of 
 * bitcount.
 */

#include <stdio.h>

int bitcount(unsigned );

int main() 
{
  unsigned int x;

  printf("请输入一个数: ");
  scanf("%d", &x);
  printf("返回: %d\n", bitcount(x));
}

int bitcount(unsigned x) 
{
	int b;

    for (b = 0; x != 0; x &= (x-1))
        b++;

    return b;

}