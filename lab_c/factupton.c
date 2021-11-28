#include<stdio.h>
int main(){
    int n, a = 1, flag =0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        a=a*i;
        if(a==n){
            printf("Fact = %d",i);
            flag = 1;
        }
    }
    if(flag == 0)
        printf("It is not a valid number");
    return 0;
}