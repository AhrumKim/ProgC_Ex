#include <stdio.h>

void main()
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		printf("for 문을 %d 회 실행했습니다.\n", i);
		break;
		/* 50번 실행후 탈출 경우 if(i==50) {break;}*/
	}
	printf("for 문을 종료했습니다.\n");
}