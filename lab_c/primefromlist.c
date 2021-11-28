#include<stdio.h>
void prime(int n)
{
    int i,flag=0;
for (i=2;i<=n/2;i++)
  {
    if (n % i == 0) 
    {
      flag = 1;
      break;
    }
  }
    if (flag == 0)
      printf("%d is a prime number.", n);
    else
      printf("%d is not a prime number.", n);
  }
  
  int main()
  {
      int n,a,i=0;
      printf("enter the number of elements to check\n");
      scanf("%d",&n);
      while(i<n)
      {
          printf("enter the element to check\n");
          scanf("%d",&a);
          prime(a);
          i++;
      }
      return 0;
      
  }