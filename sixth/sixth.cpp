#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int dan; //계산할 단
	int i;//단수와 곱해질 수

	printf(" 몇 단 ? ");
	scanf(" %d", &dan);

	/*for 문을 사용하여 프로그래밍 하기*/
	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
}