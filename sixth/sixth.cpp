#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int dan; //����� ��
	int i;//�ܼ��� ������ ��

	printf(" �� �� ? ");
	scanf(" %d", &dan);

	/*for ���� ����Ͽ� ���α׷��� �ϱ�*/
	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
}