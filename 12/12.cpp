#include<stdio.h>

void main()
{
	int a[9][9];
	int j, k;


	for (j = 0; j < 9; j++)
	{
		for (k = 0; k < 9; k++) {
			a[j][k] = (j+1) * (k+1);
			printf("%d*%d= %d  ", j + 1, k + 1, a[j][k]);
		}
		printf("\n");
		
	}
		
		
}

