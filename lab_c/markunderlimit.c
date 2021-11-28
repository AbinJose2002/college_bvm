#include <stdio.h>

int main()
{
    int sum,avg,n,i=0,mark,flag=0;
    printf("enter the number of marks to enter:: maximum 10");
    scanf("%d",&n);
    sum=0;avg=0;
    if(n>=10){
        printf("Invalid input");
        exit(0);
    }
    printf("enter the marks: ");
    do
    {  
       scanf("%d",&mark);    
       sum=sum+ mark;
       if(sum>255)
       {   
           printf("Invalid sum");
           exit(0);
       }
       i++;
    }while(i<n);
    avg=sum/n;
    printf("sum is %d and average is %d",sum,avg);
    return 0;
}