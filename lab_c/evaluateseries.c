#include <stdio.h>
int power(int i, int x)
{
    int j,a=1;
    for(j=1;j<=i;j++)
    {
      a = a*x;
    }
    return a;
}
int fact(int n){
    if(n<=1){
      return 1;
    }else{
      return n*fact(n-1);
    }
}
int main()
{
  	int x, i, n;
    float sum = 1;
    printf("Enter the value of x");
    scanf("%d",&x);
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int pow = power(x,i);
        int f = fact(i);
        sum=sum+pow/f;
        printf("%f ",sum);
    }
    printf("Sum = %f",sum);
  	return 0;
}