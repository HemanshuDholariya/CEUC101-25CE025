/*program : to make a patterns 
programmer : hemanshu dholariya
date : 8 september 2025
*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int n=5,r,s,j;
  clrscr();
  for(r=5;r>=1;r--)
  {
     for(s=0;s<n-r;s++)
     {
       printf(" ");
     }
       for(j=r;j>=1;j--)
       {
	 printf("%d",j);
       }
	 for(j=2;j<=r;j++)
	 {
	   printf("%d",j);
	 }
	   printf("\n");
}
  for(r=2;r<=n;r++)
  {
     for(s=0;s<n-r;s++)
     {
       printf(" ");
     }
       for(j=r;j>=1;j--)
      {
	printf("%d",j);
      }
	for(j=2;j<=r;j++)
	{
	  printf("%d",j);
	}
	   printf("\n");
  }
	     getch();
}
