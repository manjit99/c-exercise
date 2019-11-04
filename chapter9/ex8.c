#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int weapons();
int foods();
int wine();

int identity()
{
	int a;

	printf("enter you id no:");
	scanf("%d",&a);

	if(a==1)
	{
		printf("yes Mr weapons supplier:\n");
		weapons();
	}
	else if(a==2)
	{
		printf("yes Mr food supplier:\n");
		foods();
	}
	else if(a==3)
	{
		printf("yes Mr wine supplier:\n");
		wine();
	}
	else
	{
		printf("You are not authorised\n");
		exit(0);
	}
}

int weapons()
{
	printf("You r supplier of weapons division\n");
	int guns=0,bullets=0,bombs=0,missiles=0;
	char node,op;
	int x;

	printf("list of options:\n");
	printf("1.Gun\n");
	printf("2.Bullet\n");
	printf("3.Bomb\n");
	printf("4.Missile\n");
	int choice;

	printf("what do you want to supply(enter serial no):\n");
	scanf(" %d",&choice);
	
	printf("ur entered choice is:%d\n",choice);
	if(choice==1)
	{
		printf("presently available guns:%d\n",guns);

		printf("want to add more:(y/n)");
		scanf(" %c",&node);

		if(node=='y')
		{
			printf("enter the quantity in number:");
			scanf("%d",&x);
			guns=guns+x;
			printf("updated no of guns:%d\n",guns);

			printf("want to add more(y/n):");
                        scanf(" %c",&op);
                        if(op=='y')
                                weapons();
                        else
                                exit(0);
		}
		else
			{
				weapons();
			}
	}

	else if(choice==2)
        {
                printf("presently available bullets:%d\n",bullets);

                printf("want to add more:(y/n)");
                scanf(" %c",&node);

                if(node=='y')
                {
                        printf("enter the quantity in number:");
                        scanf("%d",&x);
                        bullets=bullets+x;
                        printf("updated no of bullet:%d\n",bullets);

			printf("want to add more(y/n):");
                        scanf(" %c",&op);
                        if(op=='y')
                                weapons();
                        else
                                exit(0);
                }
                else
                        {
                                weapons();
                        }
        }

	else if(choice==3)
        {
                printf("presently available bomb:%d\n",bombs);

                printf("want to add more:(y/n)");
                scanf(" %c",&node);

                if(node=='y')
                {
                        printf("enter the quantity in number:");
                        scanf("%d",&x);
                        bombs=bombs+x;
                        printf("updated no of bombs:%d\n",bombs);

			printf("want to add more(y/n):");
                        scanf(" %c",&op);
                        if(op=='y')
                                weapons();
                        else
                                exit(0);
                }
                else
                        {
                                weapons();
                        }
        }

	else if(choice==4)
        {
                printf("presently available missile:%d\n",missiles);

                printf("want to add more:(y/n)");
                scanf(" %c",&node);

                if(node=='y')
                {
                        printf("enter the quantity in number:");
                        scanf("%d",&x);
                        missiles=missiles+x;
                        printf("updated no of missile:%d\n",missiles);

			printf("want to add more(y/n):");
                        scanf(" %c",&op);
                        if(op=='y')
                                weapons();
                        else
                                exit(0);
                }
                else
                        {
                                weapons();
                        }
        }

	else
	{
		printf("Thanks for your visit\n");
		exit(0);
	}

}


int foods()
{
	printf("You r supplier of foods division\n");
	int rice=0,fish=0,meat=0,tea=0;
	char node,op;
	int x;

	printf("list of options:\n");
	printf("1.Rice\n");
	printf("2.Fish\n");
	printf("3.Meat\n");
	printf("4.Tea\n");
	int choice;

	printf("what do you want to supply(enter serial no):\n");
	scanf(" %d",&choice);
	
	printf("ur entered choice is:%d\n",choice);
	if(choice==1)
	{
		printf("presently available Rice:%d kg\n",rice);

		printf("want to add more:(y/n)");
		scanf(" %c",&node);

		if(node=='y')
		{
			printf("enter the quantity in kg:");
			scanf("%d",&x);
			rice=rice+x;
			printf("updated quantity of rice:%d kg\n",rice);

			printf("want to add more(y/n):");
                        scanf(" %c",&op);
                        if(op=='y')
                                foods();
                        else
                                exit(0);
		}
		else
			{
				foods();
			}
	}

	else if(choice==2)
        {
                printf("presently available fish :%d kg\n",fish);

                printf("want to add more:(y/n)");
                scanf(" %c",&node);

                if(node=='y')
                {
                        printf("enter the quantity in kg:");
                        scanf("%d",&x);
                        fish=fish+x;
                        printf("updated no of fish:%d kg\n",fish);

			printf("want to add more(y/n):");
                        scanf(" %c",&op);
                        if(op=='y')
                                foods();
                        else
                                exit(0);
                }
                else
                        {
                                foods();
                        }
        }

	else if(choice==3)
        {
                printf("presently available meat:%d kg\n",meat);

                printf("want to add more:(y/n)");
                scanf(" %c",&node);

                if(node=='y')
                {
                        printf("enter the quantity in kg:");
                        scanf("%d",&x);
                        meat=meat+x;
                        printf("updated no of meat:%d kg\n",meat);

			printf("want to add more(y/n):");
                        scanf(" %c",&op);
                        if(op=='y')
                                foods();
                        else
                                exit(0);
                }
                else
                        {
                                foods();
                        }
        }

	else if(choice==4)
        {
                printf("presently available tea:%d kg\n",tea);

                printf("want to add more:(y/n)");
                scanf(" %c",&node);

                if(node=='y')
                {
                        printf("enter the quantity in kg:");
                        scanf("%d",&x);
                        tea=tea+x;
                        printf("updated quantity of tea:%d kg\n",tea);

			printf("want to add more(y/n):");
                        scanf(" %c",&op);
                        if(op=='y')
                                foods();
                        else
                                exit(0);
                }
                else
                        {
                                foods();
                        }
        }

	else
	{
		printf("Thanks for your visit\n");
		exit(0);
	}

}


int wine()
{
	printf("You r supplier of wine division\n");
	int vodka=0,rum=0,whiskey=0,beer=0;
	char node,op;
	int x;

	printf("list of options:\n");
	printf("1.Vodka\n");
	printf("2.Rum\n");
	printf("3.Whiskey\n");
	printf("4.Beer\n");
	int choice;

	printf("what do you want to supply(enter serial no):\n");
	scanf(" %d",&choice);

	printf("ur entered choice is:%d\n",choice);
	if(choice==1)
	{
		printf("presently available Vodka:%d litre\n",vodka);

		printf("want to add more:(y/n)");
		scanf(" %c",&node);

		if(node=='y')
		{
			printf("enter the quantity in litre:");
			scanf("%d",&x);
			vodka=vodka+x;
			printf("updated quantity of vodka:%d litre\n",vodka);

			printf("want to add more(y/n):");
			scanf(" %c",&op);
			if(op=='y')
				wine();
			else
				exit(0);
		}
		else
			{
				wine();
			}
	}

	else if(choice==2)
        {
                printf("presently available Rum :%d litre\n",rum);

                printf("want to add more:(y/n)");
                scanf(" %c",&node);

                if(node=='y')
                {
                        printf("enter the quantity in litre:");
                        scanf("%d",&x);
                        rum=rum+x;
                        printf("updated quantity of Rum:%d litre\n",rum);

			printf("want to add more(y/n):");
                        scanf(" %c",&op);
                        if(op=='y')
                                wine();
                        else
                                exit(0);
                }
                else
                        {
                                wine();
                        }
        }

	else if(choice==3)
        {
                printf("presently available whiskey:%d litre\n",whiskey);

                printf("want to add more:(y/n)");
                scanf(" %c",&node);

                if(node=='y')
                {
                        printf("enter the quantity in litre:");
                        scanf("%d",&x);
                        whiskey=whiskey+x;
                        printf("updated quantity of whiskey:%d litre\n",whiskey);
			printf("want to add more(y/n):");
                        scanf(" %c",&op);
                        if(op=='y')
                                wine();
                        else
                                exit(0);
                }
                else
                        {
                                wine();
                        }
        }

	else if(choice==4)
        {
                printf("presently available beer:%d litre\n",beer);

                printf("want to add more:(y/n)");
                scanf(" %c",&node);

                if(node=='y')
                {
                        printf("enter the quantity in litre:");
                        scanf("%d",&x);
                        beer=beer+x;
                        printf("updated quantity of beer:%d litre\n",beer);

			printf("want to add more(y/n):");
                        scanf(" %c",&op);
                        if(op=='y')
                                wine();
                        else
                                exit(0);
                }
                else
                        {
                                wine();
                        }
        }

	else
	{
		printf("Thanks for your visit\n");
		exit(0);
	}

}

int main()
{
	identity();
}
