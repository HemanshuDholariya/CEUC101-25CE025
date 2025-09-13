/* program : to find out illiterate men and women 
programmer : hemanshu dholariya
date : 25 july 2025
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float population,pow,pom,tlom,lo,lm,lw,lot,low,lom,popu;
	clrscr();
	printf("enter total population=");
	scanf("%f",&population);
	printf("enter pow=");
	scanf("%f",pow);
	pow=population*(pow/100);
	printf("population of totel woman=%f", pow);
	pom=popu-pow;
	printf("\n population of totel man=%f", pom);
	lot=85.95;
	lm=80.95;
	lw=62.84;
	tlom=pom*(lm/100);
	printf("totel no. of literete men=%f",tlom);

	getch();

}
