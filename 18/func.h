#pragma once
#include<stdio.h>

extern  int a;

void func1()
{	
	a += 1;
	printf("main 함수 변수 a에 1을 더하면 %d\n", a);
}

void func2()
{
	 a += 1;
	 printf("main 함수 변수 a에 1을 더하면 %d\n", a);
}
