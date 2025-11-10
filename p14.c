/*program : to make a atm machine 
programmer : meet jagani 
date :8 aug 2025
*/
#include<stdio.h>
#include<conio.h>

void main()

{ int b=5000,w;
  char choice;
  clrscr();

  do
  {
     printf("your current balance:%d\n",b);
     printf("enter amount of withdraw:");
     scanf("%d",&w);

      if(w<=0)
      {
	 printf("invalid amount! please enter a positive value\n");
      }
	 else if (w>b)
	 {
	     printf("insufficient balance\n");
	 }
	     else if(b-999>w)
	    {
	       b=b-w;
	       printf("transaction successfull ! your current balance%d",b);
	    }
		else
	       {
		 printf("not amount in your bank");
	       }
		  printf("\n do you want to continue transaction (y/n)?:");
		  fflush(stdin);
		  scanf("%c",&choice);
  }
   while(choice=='y');
  printf("thank you for using ATM.\n");
		     getch();
}


		    printf("thank you for using ATM.\n");
		     getch();
}
