#include <stdio.h>

int main()
{
    int a[5] = { 4, 2, 3, 0, 1 };
    int temp;
    int i, k;

    // ���� �� �迭 ���
    printf("���� �� �迭 a ==> ");
    for (i = 0; i < 5; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");

    // ���� ������ ����Ͽ� �迭�� ������������ ����
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

    // ���� �� �迭 ���
    printf("���� �� �迭 a ==> ");
    for (i = 0; i < 5; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");

    return 0;
}