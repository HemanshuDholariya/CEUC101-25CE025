/*program :to find out a body mass index in activelife studio 
programmer : hemanshu dholariya
date : 18 july 2025
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int height,weight
	clrscr()
	printf("enter your weight");
	scanf("%d",&weight);
	printf("enter your height")
	scanf("%d",height);
	ans=weight/(height*height);
	printf("BMI=%d\n",ans);
	if(ans<=18)
	{
	printf("under weight");
	}
	if(ans=25)
	{
		printf("perfect weight");
	}
	if (ans>=30)
	{
		printf("overweight");
	}

	getch();

}
