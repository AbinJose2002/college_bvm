#include<stdio.h>
int main(){
    int n, a = 1;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        a=a*i;
        if(a==n){
            printf("Fact = %d",i);
        }
    }
    return 0;
}