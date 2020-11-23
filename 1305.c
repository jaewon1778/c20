#include<stdio.h>

struct student{
	int number;
	char name[10];
	double grade;
};

void inc_grade(struct student *s){
	s->grade += 1;
}

int main()
{
	struct student s={20201778, "Ko", 3.5};
	inc_grade(&s);
	printf("%f\n",s.grade);
	return 0;
}
	
