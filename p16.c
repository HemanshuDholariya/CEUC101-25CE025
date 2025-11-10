/*program : to devlop a matchstick game 
programmer : hemanshu dholariya
date : 22 aug 2025
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int user,comp;
	int total =21;
	clrscr();

	printf("Welcome to the Matchstick Game!\n");
	printf("Rules:\n- There are 21 matchsticks.\n-You can pick 1 to 4 matchsticks each turn.\n");
	printf("Whoever is forced to pick last matchstick loses.\n\n");

	while(total>0)
	{
		printf("Remaining matchsticks:%d\n",total);
		printf("pick 1,2,3,4 matchstcks:");
		scanf("%d",&user);
			if(user<1||user>4||user>total)
			{
				printf("Invalide move!\n");
				continue;
			}
		total-=user;

	if(total==1)
	{
	printf("only 1 matchstick left !\n");
	printf("computer won ");
	break;
	}
	comp=5-user;
	printf("computer %d matchsticks.\n",comp);
	total-=comp;
	}
	printf("game over!\n");
	getch();

}
