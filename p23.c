/* program : write a program in c to determine the maximum profit 
programmer : hemanshu dholariya*/
#include<stdio.h>
int main(){
    int i,j,price[5]={10,9,8,70};
    int max_profit=0,sell_day=0,buy_day=0,profit;
    for(i=0;i<5;i++){
        
        for(j=i+1;j<5;j++){
            profit=price[j]-price[i];
          if(profit>max_profit){
          max_profit=profit;
          buy_day=i+1;
          sell_day=j+1; 
          }
    
        }
        
    }
    if(max_profit>0){
    printf("Buy Day :%d\nSell Day :%d\nMax profit :%d",buy_day,sell_day,max_profit);
    }
    else printf("No profit possible");
    return 0;
}
