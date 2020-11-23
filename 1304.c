#include<stdio.h>

struct data{
	int month;
	int day;
	int year;
};

struct student{
	int number;
	char name[20];
	double grade;
	struct data *dob;
};

int main()
{
	struct data d = {12,18,2001};
	struct student s ={20201778, "Ko", 4.5};

	s.dob=&d;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %f\n", s.grade);
	printf("생년월일: %d년 %d월 %d일\n", s.dob->year,s.dob->month,s.dob->day);

	return 0;
}
	
