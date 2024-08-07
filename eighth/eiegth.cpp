#include <stdio.h>

int main()
{
    int a[5] = { 4, 2, 3, 0, 1 };
    int temp;
    int i, k;

    // 정렬 전 배열 출력
    printf("정렬 전 배열 a ==> ");
    for (i = 0; i < 5; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");

    // 버블 정렬을 사용하여 배열을 오름차순으로 정렬
    for (i = 0; i < 5 ; i++)
    {
        for (k = 0; k < 5 - 1 - i; k++)
        {
            if (a[k] > a[k + 1])
            {
                temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }
        }
    }

    // 정렬 후 배열 출력
    printf("정렬 후 배열 a ==> ");
    for (i = 0; i < 5; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");

    return 0;
}