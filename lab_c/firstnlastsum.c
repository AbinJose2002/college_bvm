#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,rem,temp,sum=0,max,min;
    printf("Enter the number");
    scanf("%d",&n);
    temp = n;
    if(n<10){
        printf("Sum = %d",n);
        exit(0);
    }
    while(n!=0){
        rem = n%10;
        if(n==temp){
            max = rem;
        }
        if(n<10){
            min = rem;
        }
        n/=10;
    }
    sum = min+max;
    printf("Sum = %d",sum);
    return 0;
}