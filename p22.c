/*aim : display the sitting arrange ment in theatre
name : hemanshu dholariya*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,n,r,c;
   char s[5][8];
   clrscr();
   for(i=0;i<5;i++)
   {
     for(j=0;j<8;j++)
     {
       s[i][j]='0';
     }
   }
   printf("enter number of reserved seats:");
   scanf("%d",&n);

     for(i=0;i<n;i++)
     {
       printf("enter row and seat:");
       scanf("%d %d",&r,&c);

       if(r>=1 && r<=5 && c>=1 && c<=8 && s[r-1][c-1]=='0')
       {
	s[r-1][c-1]='X';
       }
       else
       {
	 printf("invalide/already reserved! try again.\n");
	 i--;
       }
     }
     printf("\nseating chart:\n");
     for(i=0;i<5;i++)
     {
       printf("row %d:",i+1);
	for(j=0;j<8;j++)
	{
	  printf("%c",s[i][j]);
	}  printf("\n");

       getch();

    }
}
