#pragma once
#include<stdio.h>

extern  int a;

void func1()
{	
	a += 1;
	printf("main �Լ� ���� a�� 1�� ���ϸ� %d\n", a);
}

void func2()
{
	 a += 1;
	 printf("main �Լ� ���� a�� 1�� ���ϸ� %d\n", a);
}
