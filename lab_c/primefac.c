#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Factors = ");
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
}