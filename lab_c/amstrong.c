#include <stdio.h>
#include <math.h>
int digit;
int multiply(int);
int main()
{
    int num,temp,rem,result=0;
    printf("enter the no. of digits in the no.");
    scanf("%d",&digit);
    printf("enter the no.");
    scanf("%d",&num);
    temp=num;
    
    while(temp>0)
    {
     rem=temp%10;
     
     result+=multiply(rem);
     
     temp=temp/10;
     
    }
    
    if(result==num)
    printf("armstrong");
    else
    printf("not armstrong");
    
    
    return 0;
}


  int multiply(rem)
  {
      int a=1,i;
      for(i=1;i<=digit;i++)
      {
          a*=rem;
      }
      return a;
 }   