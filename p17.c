/* program : write a program to simulate the distance tracking 
programmer : hemanshu dholariya
date : 25 aug 2025
*/
#include<stdio.h>
#include<conio.h>
void main()
{
  float d,m;
  d=0.5;
  clrscr();
  while(d<10)
{
  for(m=1;m<21;m++)
{  printf("minute= %.0f",m);
  printf("\tdistance covered=%.1f\n",d);
  d=d+0.5;
}
}
 getch(); 
}
