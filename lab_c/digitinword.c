#include<stdio.h>
int main(){
    int rem,n,digit=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        digit=digit*10+rem;
        n/=10;
    }
    while(digit!=0){
        rem=digit%10;
        switch(rem){
            case 0 : printf("Zero ");
            break;
            case 1 : printf("One ");
            break;
            case 2 : printf("Two ");
            break;
            case 3 : printf("Three ");
            break;
            case 4 : printf("Four ");
            break;
            case 5 : printf("Five ");
            break;
            case 6 : printf("Six ");
            break;
            case 7 : printf("Seven ");
            break;
            case 8 : printf("Eight ");
            break;
            case 9 : printf("Nine ");
            break;
            default:printf("Invalid");
        }
        digit/=10;
    }
}