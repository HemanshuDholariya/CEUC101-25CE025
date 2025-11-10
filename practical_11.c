#include<stdio.h>
int main()
{
    int marks;
    L1:
    printf("\n enter your marks : ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Invalid input \n");
        goto L1;
        return 0;
    }
    (marks>=90)?printf("Grade A") :(marks>=80 && marks<90) ?printf("Grade B") : (marks>=70 && marks<80)? printf("Grade C"):(marks>=60 && marks<70)? printf("Grade D"):printf("Grade f");


    return 0;

}
