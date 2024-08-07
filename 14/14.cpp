#include<stdio.h>

void main()
{
	int aa[4] = { 100,200,300,400 };
	int* ptr;

	for (int i = 0; i < 4; i++)
	{
		printf("aa[%d] 값은 %d\n", i, aa[i]);
	}
	ptr = aa;

	*ptr = 500;
	*(ptr + 3) = 600;

	for (int i = 0; i < 4; i++)
	{
		printf("변경된 aa[%d] 값은 %d\n", i, aa[i]);
	}
}