#include<stdio.h>
int main(){
    int bi,rem,de=0,x,base=1,i;
    printf("Enter the binary number in form of 0's and 1's");
    scanf("%d",&bi);
    int temp = bi;
    while(bi>0){
        rem = bi%10;
        de+=rem*base;
        base*=2;
        bi/=10;
    }
    printf("Decimal = %d",de);
}