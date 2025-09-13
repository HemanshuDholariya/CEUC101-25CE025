/* program : calculate to a fahrenheit
programmer : hemanshu dholariya
date : 25 july 2025
*/
#include <stdio.h>
#include <conio.h>  

void main() 
{
    float celsius, fahrenheit;
     clrscr();
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("Temperature in Fahrenheit = %.2f", fahrenheit);

    getch();  
}
