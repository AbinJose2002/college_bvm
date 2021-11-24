#include <stdio.h>
int main()
{
  	int i, n, rem, sum = 0;
    for(n=1;n<=500;n++){
        i = n;
        sum = 0;
        while(i!=0){
            rem = i%10;
            sum=sum+rem;
            i=i/10;
        }
        if(sum==8){
            printf("%d\n",n);
        }
    }
  	return 0;
}