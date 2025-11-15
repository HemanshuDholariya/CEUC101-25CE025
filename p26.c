#include<stdio.h>
#include<math.h>

float mean(int a,int b,int c){

    return (a+b+c)/2.0;

}

float area(int a,int b,int c){
      float s= mean(a,b,c);
      return sqrt(s*(s-a)(s-b)(s-c));
}

void input(int a,int b,int c){
if(a+b>c && a+c>b && b+c>a){

    printf("valid triangle : yes ,Area : %.2f\n",area(a,b,c));
}
else{
    printf("valid triangle : No   Messeage : The given length do not form valid Triangle");
}
}



int main(){
int l1,l2,l3;

printf("Enter a three sides of triangal :");
scanf("%d %d %d",&l1,&l2,&l3);
 input(l1,l2,l3);
return 0;
}
