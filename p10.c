/* program : to make a restaurant menu 
programmer :  hemanshu dholariya
date : 1 aug 2025
*/
#include <stdio.h>
#include <conio.h>

void main()
{
	int n,fa=0;
	char ch;
	clrscr();

       a:
	printf("%-15s","burger");
	printf("150\n");
	printf("%-15s","pizza");
	printf("200\n");
	printf("3.pasta=120\n4.sandwich=100\n5.frenchfries=70\n");
	printf("please kindly select the order:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			fa=fa+150;
			break;
		case 2:
fa=fa+200;
			break;
		case 3:
			fa=fa+120;
			break;
		case 4:
			fa=fa+100;
			break;
		case 5:
			fa=fa+70;
			break;

		default:
			printf("please enter your order");
	}
	printf("something else sir/madam ");
	flushall();
	scanf("%c",&ch);
	if(ch=='y')
	{
	goto a;
	}
	else
	{
	printf("total bill :%d",fa);
	}
	getch();
}
