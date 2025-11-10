/*aim:display to all the book ids sequentially
programmer:hemanshu dholariya 
date:4 aug 2025*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	for(n=1;n<=50;n++)
	{
	 printf("\nbook id:%d",n);
	 if(n%5==0)
	 printf("special addition\n",n);
	}
	getch();
}
