#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct book{
	char name[20];
	float price;
	int pages;
	}b,c;

int main(){

 	strcpy(b.name,"manjit");
	b.price=123.45;
	b.pages=12;

	c= b;
	
	/*for(int i=0;i<2;i++)
	{
		printf("enter the name,price and no of pages:\n");
		scanf("%s %f %d",&b[i].name,&b[i].price,&b[i].pages);
	}*/

		printf("Details of books\n");
		printf("Name:%s\nPrice:%.2f\nPages:%d\n",b.name,b.price,b.pages);
		printf("Name:%s\nPrice:%.2f\nPages:%d\n",c.name,c.price,c.pages);
}
