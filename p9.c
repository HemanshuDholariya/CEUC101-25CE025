/* program : write a program to a special discount 
programmer : hemanshu dholariya
date : 1 aug 2025
*/
#include <stdio.h>
#include <conio.h>
void main()
{
	float amount,x,y;
	clrscr();
	printf("enter the total amount");
	scanf("%f",&amount);
	if(amount<1000)
	{
	    printf("their will be no discount");
	}
	else if(amount<5000)
	{
		x=amount-(amount*10/100.0);
		printf("final price is %f",x);
	}
	else (amount<10000)
	{
		y=amount-(amount*20/100.0);
		printf("final price is %f",y);
	}
	getch();
}
