#include<stdio.h>

void main()
{
	int num1 = 100;
	int num2 = 200;
	int num3 = 300;
	int* a[3] = { &num1, &num2, &num3 };

	for (int i = 0; i < 3; i++) {
		printf("a[%d] = 주소값 :  %p , 값 : %d\n", i, a[i], *a[i]);
	}

}