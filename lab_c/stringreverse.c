#include<stdio.h>
#include<string.h>
 int main(){
     char a[100],i,j,b[100];
     int count;
     printf("Enter the string : ");
     gets(a);
     for(int i=0;a[i]!='\0';i++){
         count++;
     }
     for(i=count-1,j=0;i>=0;i--,j++){
        b[j] = a[i];
     }
     for(i=0;i<count;i++){
        printf("%c",b[i]);
    }
     return 0;
 }