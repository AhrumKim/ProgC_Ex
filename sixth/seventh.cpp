#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int a[5] = { 4,2,3,0,1 };
	int temp;
	int i, k;

	printf("정렬 전 배열 a ==> ");
	for (i = 0; i < 5; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("/n");



	for (i = 0; i < 5; i++)
	{
		for(k = 0 ; k < 5; k++)
		{
			if (a[i] > a[k])
			{
				a[i] = a[k];
			}
			

		}
		printf("%d ", a[i]);
	}
}