#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int a, b;
	printf(" 몇 단을 출력하시겠습니까? ");
	scanf("%d", &a);
	while (1)
	{
		printf("%d * %d = %d \n", a, b, a * b);
	}

}