#include <stdio.h>
#include<math.h>
int fact(int n){

}
int main()
{
  	int x, i, sum = 0, n;
    printf("Enter the value of x");
    scanf("%d",&x);
    printf("Enter the value of n");
    scanf("%d",&n);
    sum = 1+x;
    for(i=2;i<=n;i++){
        sum+=(pow(x,i))/fact(i);
    }
    printf("Sum = %d",sum);
  	return 0;
}