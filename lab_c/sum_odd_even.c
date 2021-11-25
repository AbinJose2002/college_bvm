#include<stdio.h>
int main(){
    int n, i, sum_even=0, sum_odd=0;
    printf("Enter the limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            sum_even+=i;
        }else{
            sum_odd+=i;
        }
    }
    printf("Sum of odd = %d\nSum of even = %d",sum_odd,sum_even);
}