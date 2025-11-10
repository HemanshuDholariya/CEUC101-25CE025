/*program : to devlop a countdown timer 
programmer : hemanshu dholariya
date : 18 aug 2025
*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
	int n,i;
	clrscr();
	printf("enter the time for timer in seconds:");
	scanf("%d",&n);
	for(i=n;i>=0;i--)
	{
		printf("%d",i);
		delay(1000);
		clrscr();
	}
	getch();
}
