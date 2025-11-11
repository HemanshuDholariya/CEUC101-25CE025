/*program : to make a patterns
programmer : hemanshu dholariya
date: 1 september 2025
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(i==1) {
			printf("%d",j);
		}
			else if(i==j || j==(10-i)){
			printf("%d",j);  }
			else
			printf(" ");
		}
			printf("\n");
	}
	getch();

}
