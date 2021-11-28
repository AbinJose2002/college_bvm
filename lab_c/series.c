#include<stdio.h>
int fact(int i){
    if(i<=1){
        return 1;
    }else{
        return i*fact(i-1);
    }
}
int main(){
    float n,i,sum =1;
    printf("enter the limit number");
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        sum+=i/fact(i);
    }printf("Sum = %f",sum);
    return 0;
}
