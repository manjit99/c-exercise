#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{

		int Roll;
		char name[20];
		char department[20];
		char course[20];
		int year;
};

void year(struct student *p)
{
	int x;
	printf("enter the year to know the names of students that joined that year\n");
	scanf(" %d",&x);

	for(int i=0;i<3;i++)
	{
		if((p+i)->year==x)
		{
			printf("%s\n",(p+i)->name);
		}
	}
}

void print(struct student *pt)
{
	int no;

	printf("enter the roll no to know the details:\n");
	scanf(" %d",&no);

	for(int i=0;i<3;i++)
	{
		if((pt+i)->Roll==no)
		{
			printf("details of the roll no:%d are\nname:%s\ndepartment:%s\ncourse:%s\nyear:%d\n\n",no,(pt+i)->name,(pt+i)->department,(pt+i)->course,(pt+i)->year);
		}
	}
}

int main()
{
	struct student b[3];

	for(int y=0;y<3;y++)
	{
		printf("enter the details of the %dth student\n",y);
		
		printf("enter rollno,name,department,course,year\n");
		scanf(" %d %s %s %s %d",&b[y].Roll,&b[y].name,&b[y].department,&b[y].course,&b[y].year);

	}
	
	year(b);
	print(b);
}

