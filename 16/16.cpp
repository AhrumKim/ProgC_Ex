#include<stdio.h>
#include<string.h>

void main()
{
	struct student {
		char name[10];
		int kor;
		int eng;
		float avg;
	};

	struct student s[3];

	int i;

	strcpy(s[0].name, "Kim");
	s[0].kor = 90;
	s[0].eng = 80;
	s[0].avg = (s[0].kor + s[0].eng) / 2.0f;
	strcpy(s[1].name, "Lee");
	s[0].kor = 70;
	s[0].eng = 60;
	s[0].avg = (s[0].kor + s[0].eng) / 2.0f;

	strcpy(s[0].name, "Park");

	printf("-- ����ü �迭  --\n");
	for (i = 0; i < 3; i++)
	{
		printf("�л� �̸� ==> %s\n", s[0].name);
		printf("���� ���� ==> %d\n", s[0].kor);
		printf("���� ���� ==> %d\n", s[0].eng);
		printf("��� ���� =+> %5.1f\n", s[0].avg);
		printf("\n");
	}
}