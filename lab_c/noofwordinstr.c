#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int i, c = 1;
    printf("Enter the string");
    gets(a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]==' ' || a[i]=='\t' || a[i]=='\n'){
            c++;
        }
    }
    printf("Number of words = %d",c);
    return 0;
}