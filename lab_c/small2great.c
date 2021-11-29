#include<stdio.h>
int main(){
    int limit , num, fbig = 0, sbig = 0;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    while(limit>0){
        scanf("%d",&num);
        if(num>fbig){
            sbig = fbig;
            fbig = num;
        }else if(num>sbig){
            sbig = num;
        }
        
        if(num<sbig){
            min
        }else if(num>sbig){
            sbig = num;
        }

        limit--;
    }

}