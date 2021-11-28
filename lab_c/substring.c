#include<string.h>
#include<stdio.h>
int main(){
    char i, a[100], count1=0, pos, count2=0, b[100], j=0, flag = 0;
    printf("Enter the first string");
    gets(a);
    printf("\nEnter the second string");
    gets(b);
    for(i=0;a[i]!='\0';i++){
        count1++;
    }printf("%d",count1);
    for(i=0;b[i]!='\0';i++){
        count2++;
    }printf("%d",count2);
    for(i=0;i<count1;i++){
        if(a[i]==b[0]){
            pos = i;
        }
    }
    for(i=pos, j=0;i<count1;i++){
       
            if(a[i]!=b[j]){
                flag = 1;
            }
        j++;
    }
    if(flag!=0)
        printf("It is not same");
    else    
        printf("It is same");
    return 0;
}