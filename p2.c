/* program to find out area & perimeter of the rectangular park
editor       :  hemanshu dholariya
edited date : 18 july 2025
*/
#include <stdio.h>
#include <conio.h>
void main()
{
	int L,B,A,P;
	clrscr();
	L=70;
	B=90;
	A=L*B;
	P=2*(L+B);
	printf("area = %d",A);
	printf("\n perimeter = %d",P);
	getch();
}
