#include<stdio.h>
#include<string.h>
char books[3][60]={"data sturcher","sata managemant","Letter C"};
int avalable[3]={1,1,1};
int totalbook=3;
int  calculatefine(lastdate){
    int perday=10;
    return  lastdate*perday;
}
 void borrowbook(char* bookname){
    for(int i=0;i<totalbook;i++){
     if(strcmp(bookname,books[i])==0){
        if(avalable[i]==1){
            avalable[i]=0;
            printf("\n\nyou borrowed %s\n",books[i]);
        }
        else{
            printf("Sorry, book is alredy borrowed");
        }
     }
    }
 }

 int getTotalBook(){
    return totalbook;
 }

void  displaybooks(){
    printf("\n_Available books_\n");
    for(int i=0;i<totalbook;i++){
        if(avalable[i]==1){
            printf("%s\n",books[i]);
        }
    }

}

int main(){
printf("Welcomr to library managemant system\n\n");
    displaybooks();
printf("Total books : %d",getTotalBook());
borrowbook("data sturcher");
displaybooks();
int lastdate=6;
printf("\nFine for %d days late is %d",lastdate,calculatefine(lastdate));

    return 0;
}
