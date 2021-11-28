#include<stdio.h>
int main(){
    int x=1,y=1,gcd,lcm,i;
    printf("Enter the two numners");
    scanf("%d%d",&x,&y);
    for(i=1;i<=x;i++){
        if(x%i==0&&y%i==0){
            gcd = i;
            
        }
    }
    int max = (x>y) ? x : y;
     while (1) {
        if (max % x == 0 && max % y == 0) {
            printf("The LCM of %d and %d is %d.", x, y, max);
            break;
        }
        ++max;
    }
    printf("\nGCD = %d",gcd);
    return 0;
}