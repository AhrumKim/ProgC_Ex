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

	printf("-- 구조체 배열  --\n");
	for (i = 0; i < 3; i++)
	{
		printf("학생 이름 ==> %s\n", s[0].name);
		printf("국어 점수 ==> %d\n", s[0].kor);
		printf("영어 점수 ==> %d\n", s[0].eng);
		printf("평균 점수 =+> %5.1f\n", s[0].avg);
		printf("\n");
	}
}