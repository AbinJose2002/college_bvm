#include<iostream>
#include<string.h>
using namespace std;
#define size 10
class stack
{
    char item[size],top;
    public:
    stack()
    {
        top=-1;
    }
    void push(char i)
    {
        if(top<size-1)
            item[++top]=i;
        else
        {
            cout<<"Overflow\n";
            exit(0);
        }
    }
    void pop()
    {
        top--;
    }
    char stacktop()
    {
        return(item[top]);
    }
};
int main()
{
    stack s;
    cout<<"\n\t\t\t***INFIX TO POSTFIX***\N";
    char a[10],b[10];
    int i,j=0;
    cout<<"\n Enter the infix expression : ";
    cin>>a;
    s.push('(');
    strcat(a,")");
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>=65 && a[i]<=90) || (a[i]>='a' && a[i]<='z'))
        {
            b[j++]=a[i];
        }
        if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/'||a[i]=='^')
        {
            if(a[i]=='^')
                s.push(a[i]);
            else if(a[i]=='*'||a[i]=='/')
            {
            while(s.stacktop()=='^'||s.stacktop()=='*'||s.stacktop()=='/')
            {
                b[j++]=s.stacktop();
                s.pop();
            }
            s.push(a[i]);
            
        }    
        else if(a[i]=='+'||a[i]=='-')
        {
            while(s.stacktop()=='^'||s.stacktop()=='+'||s.stacktop()=='-' || s.stacktop()=='*'|| s.stacktop()=='/')
            {
                b[j++]=s.stacktop();
                s.pop();
            }
            s.push(a[i]);
        }
        }
        if(a[i]=='(')
            s.push(a[i]);
        if(a[i]==')')
        {
            while(s.stacktop()!='(')
            {
                b[j++]=s.stacktop();
                s.pop();
            }
            s.pop();
        }
        b[j]='\0';
        cout<<"\nInfix expression is"<<a;
        cout<<"\npostfix expression is"<<b;
    }
    return 0;
}