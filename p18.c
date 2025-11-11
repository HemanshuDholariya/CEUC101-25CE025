/* aim:write a program to generate and display maltiplication table 
  programmer:hemanshu dholariya
  data:29/8/25  */

#include<stdio.h>
#include<conio.h>
  void main()
{
	  int r,c;
	  clrscr();
	  for(r=1;r<=10;r++)
  {
	  for(c=1;c<=5;c++)
   {
	 printf("%d\t",r*c);
   }
	 printf("\n");
  }
	 getch();
}
