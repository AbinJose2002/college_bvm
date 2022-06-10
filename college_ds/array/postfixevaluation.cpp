#include<iostream>
#include<string.h>
using namespace std;
#define size 10
class post
{
    int stack[size];
    char exp[50];
    int top;
    public:
    post()
    {
        top=-1;
    }
    void push(int);
    int pop();
    void evaluate();
};
void post::push(int i)
{
    if(top<size-1)
    {
        stack[++top]=i;
    }
    else
    {
        cout<<"\nOverflow";
        exit(0);
    }
}
int post::pop()
{
    int m=stack[top];
    top--;
    return(m);
}
void post::evaluate()
{
    int i,a,b,c,d=0;
    cout<<"\nEnter the postfix expression : ";
    cin>>exp;
    strcat(exp,")");
    for(i=0;exp[i]!=')';i++)
    {
        switch(exp[i])
        {
            case '+':
            a=pop();
            b=pop();
            c=b+a;
            push(c);
            break;
            case '-':
            a=pop();
            b=pop();
            c=b-a;
            push(c);
            break;
            case '*':
            a=pop();
            b=pop();
            c=b*a;
            push(c);
            break;
            case '/':
            a=pop();
            b=pop();
            c=b/a;
            push(c);
            break;
            case '^':
            a=pop();
            b=pop();
            c=b^a;
            push(c);
            break;
            case ',':
            if(d!=0)
            {
                push(d);
                d=0;
            }
            break;
            default:
            d=d*10+(exp[i]-48);
            break;
        }
    }
    int result=pop();
    if(top=-1)
    cout<<"\nThe result is : "<<result;
}
int main()
{
    cout<<"\n\t\t\t***POSTFIX EVALUATION***\n";
    post p;
    p.evaluate();
}
