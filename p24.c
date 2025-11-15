#include<stdio.h>
int main()
{
    int i,j,len=0,result=0;
    char notes[20],cmp[20],copy[20],notes2[20];
    printf("Enter  the notes\n");
    gets(notes);
    //leanght...................
    printf("_Lenght_\n\n");
    for(i=0; notes[i]!='\0'; i++)
    {
        len++;
    }
    printf("Leangth of notes is : %d\n",len);
    for(i=len-1; i>=0; i--)
    {
        printf("%c",notes[i]);
    }
    printf("\n");
   //comparition...................
    printf("_Comparision string_\n\n");
    printf("Enter the second string : \n");
    gets(cmp);
    i=0;
    while(notes[i]!='\0' && cmp[i]!='/0'){
        if(notes[i]!= cmp[i])
        {
            result=notes[i]-cmp[i];
            break;
        }
        i++;
    }
    if(result==0)
    {
        result=notes[i]-cmp[i];
    }
    if(result==0)
    {
        printf("both string are equal\n");
    }
    else if(result>0)
    {
        printf("The first string is grater than second string\n");
    }
    else
    {
        printf("The first string is less than second string\n");
    }
    //copy string................
    fflush;
       printf("\n_Copy string_\n\n");
      for(i=0;notes[i] != '\0';i++){
        copy[i] = notes[i];
      }
      copy[i]='\0';
      printf("Copid string is : %s\n",copy);

      //concetenet string...........
         printf("\n\n_Concatenate string_\n\n");
        printf("Enter a third  string for merge :\n");
        gets(notes2);
        i=0;
        while(notes[i] !='\0') {i++;}
        notes[i]=' ';
        i++;

        j=0;
        while (notes2[j] != '\0'){
            notes[i] = notes2[j];
            i++;
            j++;
        }
        notes[i] = '\0';
        printf("Mergerd string is : %s\n",notes);

        //upper case................

         for(i=0;notes[i] !='\0';i++){
            if(notes[i]>='a' && notes[i]<='z'){
                notes[i]=notes[i]-32;
            }
         }
         printf("upper case is : %s\n",notes);

        //lowwer case...............

         for(i=0;notes[i]!='\0';i++){
            if(notes[i]>='A' && notes[i]<='Z'){
                notes[i]=notes[i]+32;
            }
         }
         printf("Lower case is : %s\n",notes);


        // capitalize................
        for(i=0; notes[i]!=0;i++){
            if(notes[i]==' '){
                notes[i+1]=notes[i+1]-32;
            }
            if(i==0){
                notes[i]-=32;
            }
        }

        printf("Capitalize : %s\n",notes);

    return 0;
}
