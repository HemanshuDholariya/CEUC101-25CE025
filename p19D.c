/*program :to make a patterns 
programmer : hemanshu dholariya
date : 8 september 2025
*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int r,c,n=4;
   clrscr();
   for(r=1;r<=4;r++)
   {
      for(c=1;c<=n-r;c++)
      {
	 printf(" ");
      }
	 for(c=0;c<=r-1;c++)
	 {
	   printf("%c",'A'+c);
	 }
	   for(c=r-1;c>=1;c--)
	   {
	      printf("%c",'A'+c-1);

	   }

		printf("\n");
   }

	for(r=1;r<=3;r++)
	{
	   for(c=1;c<=r;c++)
	   {
	     printf(" ");
	   }
	     for(c=0;c<n-r;c++)
	    {
	       printf("%c",'A'+c);
	    }
	       for(c=0;c<3-r;c++)
	       {
		 printf("%c",'B'-c);
	       }
		  printf("\n");
	}
  getch();
}
