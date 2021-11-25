#include<stdio.h>
int main(){
    int t1 = 0, t2 = 1, next, n, i;
    printf("Enter the limit number");
    scanf("%d",&n);
    printf("%d %d",t1,t2);
    for(i = 3;i<=n;i++){
        next = t1+t2;
        printf(" %d",next);
        t1 = t2;
        t2 = next;
    }
    
}