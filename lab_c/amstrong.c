// leo sebastian is a killadi
#include<stdio.h>
#include<math.h>
int main(){
    int n, num, temp, d, result;
    printf("Number of digits in number");
    scanf("%d",&n);
    printf("enter the digit");
    scanf("%d",&num);
    temp = num;
    while(temp>0){
        d = temp%10;
        result+=pow(d,n);
        n/=10;
    }
    if(result==num){
        printf("Amstrong");
    }else{
        printf("not amstrong");
    }
    return 0;
}