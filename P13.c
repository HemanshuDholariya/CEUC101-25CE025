/*aim:display to the current water level after each refill
programmer:hemanshu dholariya
date:4 july 2025*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int p;
	clrscr();
	for(p=10;p<=100;p=p+10)
	{
	if(p%10==0)
	printf("\nthe current water level is %d liters",p);
	if(p==100)
	printf("\ntank is full");
	}
	getch();

}
