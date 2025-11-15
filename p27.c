#include<stdio.h>
int fibo(int x){
    int y;
    if(x==1 ||x==2)
    return 1;
    else
     y=fibo(x-1)+fibo(x-2);
    return y;

}
int main(){
   
    int n,i;
    printf("Enter Number of month : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Month %d Saving :%d\n",i,fibo(i));
    }
   
    

    return 0;
}
