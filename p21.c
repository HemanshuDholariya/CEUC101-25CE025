/*program : write  a program to aid in quick analysis and validation of input data
programmer : hemanshu dholariya
date : 19 sept 2025 */
#include<stdio.h>
 int main()
{
    int str[25];
    int p=0,n=0,o=0,e=0,i,j;
    for(i=0;i<25;i++)
    {
      scanf("%d",&str[i]);
    }
    for(j=0;j<25;j++)
    {
        if(str[j]>0)
        {
            p=p+1;
        }
        else
           {
            n++;}
    }
        for(j=0;j<25;j++)
        {

               if(str[j]%2==0)

         {

           e++;
         }
       else
       {


        o++;
       } }


    printf("total number of positive numbver : %d\n",p);
    printf("total number of negative number :%d\n",n);
    printf("total number of even number :%d\n",o);
    printf("total number of odd number : %d\n",e);
    return 0;
}
