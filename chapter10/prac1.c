#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
	char name[20];
	int id;
	int age;
};

int main()
{
	struct student a={"Manjit",29,28};
	
	struct student *p;
	
	p=&a;

	printf("name:%s\nId=%d\nAge=%d\n",p->name,p->id,p->age);	
}
