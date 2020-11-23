#include<stdio.h>
#include<string.h>
#define STU_NUM 1
#define PH_NUM 2

struct student{
	int type;
	union{
		int stu_num;
		char ph_num[15];
	}id;
	char name[20];
};

void print(struct student s)
{
	switch(s.type)
	{
		case STU_NUM:
			printf("학번 %d\n", s.id.stu_num);
			printf("이름 %s\n", s.name);
			break;
		case PH_NUM:
			printf("휴대폰 번호: %s\n", s.id.ph_num);
			printf("이름: %s\n", s.name);
			break;
		default:
			printf("타입오류\n");
			break;
	}
}

int main()
{
	struct student s1, s2;

	s1.type=STU_NUM;
	s1.id.stu_num = 20201778;
	strcpy(s1.name, "고재원");

	s2.type=PH_NUM;
	strcpy(s2.id.ph_num,"010 XXXX XXXX");
	strcpy(s2.name, "고재원");

	print(s1);
	print(s2);
}
