//P37   2.8  自增运算符与自减运算符
#include <stdio.h>

void squeeze(char s[], int c);


main()
{
	int c;
	char s[100];// t[100];

	printf("请输入要删除的字符:");
	scanf("%d",&c);
	printf("请输入一个字符串:");
	scanf("%s",&s);

	squeeze(s,c);

	printf("删除%d后的字符串为:%s\n",c,s);
	
}

void squeeze(char s[], int c)
{
	int i, j;

	for (i = j = 0; s[i] != '\0'; i++)
	{
		if (s[i] != c)
			s[j++] = s[i];
	}
	s[j] = '\0';
}

/*老大帮我看看这个程序，能够运行。
 *可是如果我输入要删除的字符是一个数字，
 *再输入字符串根本不会删除。
 *如果我输入要删除的字符是字母，它直接就结束了。
 */