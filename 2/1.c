/*
 * Author: YuQian Xie <772334318@qq.com>
 * Date:   Nov 6.2015
 * File:   1.c
 *
 * Write a program to determine the ranges of char , short , int , 
 *and long variables, both signed and unsigned , 
 *by printing appropriate values from standard headers and by direct computation. 
 *Harder if you compute them: determine the ranges of the various floating-point types. 
 */
#include <stdio.h>
#include <limits.h>

main()
{
	printf("signed char min = %d\n",SCHAR_MIN);
	printf("signed char max = %d\n",SCHAR_MAX);
	printf("signed short min = %d\n",SHRT_MIN);
	printf("signed short min = %d\n",SHRT_MAX);
	printf("signed int min = %d\n",INT_MIN);
	printf("signed int min = %d\n",INT_MAX);
	printf("signed long min = %ld\n",LONG_MIN);
	printf("signed long min = %ld\n",LONG_MAX);
	printf("unsigned char min = %u\n",UCHAR_MAX);
	printf("unsigned short min = %u\n",USHRT_MAX);
	printf("unsigned int min = %u\n",UINT_MAX);
	printf("unsigned long min = %lu\n",ULONG_MAX);
}
