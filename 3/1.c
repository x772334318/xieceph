/*
 *Author: YuQian Xie <xieceph@163.com>
 *Date: Nov 7.2015
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

	printf("����������ٸ���: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("������v[%d]: ", i);
		scanf("%d", &v[i]);
	}
	printf("��������Ҫ���ҵ���: ");
	scanf("%d", &x);
	printf("%d ��λ���� %d\n", x, binsearch(x, v, n));

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
