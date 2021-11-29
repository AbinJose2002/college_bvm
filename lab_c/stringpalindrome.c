#include<stdio.h>
#include<string.h>
 void palindrome(char a[], int n){
     int i,j,flag=0;
     for(i=0,j=n-1;i<n;i++,j--){
         if(a[i]!=a[j]);
            flag = 1;
     }
     if(flag==0){
         printf("String is palindrome");
     }else{
         printf("String is not palindrome");
     }
 }

 int main(){
     char a[100];
     int count;
     printf("Enter the string : ");
     gets(a);
     for(int i=0;a[i]!='\0';i++){
         count++;
     }
     palindrome(a,count);
     return 0;
 }