//P37   2.8  ������������Լ������
#include <stdio.h>

void squeeze(char s[], int c);


main()
{
	int c;
	char s[100];// t[100];

	printf("������Ҫɾ�����ַ�:");
	scanf("%d",&c);
	printf("������һ���ַ���:");
	scanf("%s",&s);

	squeeze(s,c);

	printf("ɾ��%d����ַ���Ϊ:%s\n",c,s);
	
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

/*�ϴ���ҿ�����������ܹ����С�
 *�������������Ҫɾ�����ַ���һ�����֣�
 *�������ַ�����������ɾ����
 *���������Ҫɾ�����ַ�����ĸ����ֱ�Ӿͽ����ˡ�
 */