/*
program : write a program to attendance sheet 
programmer : hemanshu dholariya
date : 12 september 2025
*/
#include <stdio.h>

int main()
{
int N;

printf("Enter total number of participants: "); 
scanf("%d", &N);

int ids[N 1];
printf("Enter %d participant IDs: \n", N 1);

for (int i = 0; i < N 1; i++)
{ scanf("%d", &ids[i]);}

    int missing = -1;

for (int i = 1; i <= N; i++) 
{
    int found = 0;

for (int j = 0; j < N - 1; j++) 
{
if (ids[j] == i) 
{
    found = 1; 
    break;
}
}
if (found == 0) 
  {
    missing = i ;
    break ;
  }
}
printf("The missing participant ID is: %d\n", missing);

return 0;
}
