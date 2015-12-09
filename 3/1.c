/*
 *Author: YuQian Xie <xieceph@163.com>
 *Date: Dec 7.2015
 *File: 1.c
 *
 *Our binary search makes two tests inside the loop, 
 *when one would suffice (at the price of more tests outside). 
 *Write a version with only one test inside the loop and measure the difference in run-time.
 */
#include<stdio.h>
#define MAXLEN 100

int binsearch(int x, int v[], int n);

main()
{
	int v[MAXLEN];
	int x, n, i;

	printf("您将输入多少个数: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("请输入v[%d]: ", i);
		scanf("%d", &v[i]);
	}
	printf("请输入你要查找的数: ");
	scanf("%d", &x);
	printf("%d 的位置是 %d\n", x, binsearch(x, v, n));

	return 0;
}

int binsearch(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;
	mid = (low + high) / 2;
	while (low <= high && x != v[mid])
	{
		if(x < v[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
		mid = (low + high) / 2;
	}
	return (x == v[mid]) ? mid + 1 : -1;
}
