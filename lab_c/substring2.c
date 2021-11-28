#include<stdio.h>
int main()
{
    char a[50],b[50],i=0,j=0,n=0,m=0,pos,flag=0,k=0;
    printf("enter a string:");
    gets(a);
    printf("Enter another string:");
    gets(b);
    while(a[i]!='\0')
    {
        m++;
        i++;
    }
    i=0;
    while(b[i]!='\0')
    {
        n++;
        i++;
    }
    for(i=0;i<m;i++)
    { 
        flag=0;
        if(a[i]==b[0])
        {
            pos=i;
            for(j=0;j<n;j++,pos++)
            {
                if(a[pos]!=b[j])
                {
                    flag=1;
                }
            }
            if(flag==0)
            {
               printf("It is a substring");
               break;
            }
        }
    }
    if(flag==-1)
    {
        printf("It is not a substring");
    }
    return 0;
}