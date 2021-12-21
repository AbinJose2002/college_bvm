#include<iostream>
using namespace std;
class stack{
    public:
    int top, a[100], n, i, item;
    stack(){
        top = 0;
        cout<<"--Stack operation--\nEnter the number of elements : ";
        cin>>n;
    }
    void push(){
        if(top==n){
            cout<<"\nStack Overflow\n";
        }else{
            top++;
            cout<<"\nEnter the element to insert : ";
            cin>>item;
            a[top] = item;
        }
    }
    void pop(){
        if(top==0){
            cout<<"\nStack Underflow\n";
        }else{
            item = a[top];
            cout<<endl<<item<<" deleted";
            top--;
        }
    }
    void print(){
        cout<<"\nElements of array : ";
        for(i=1;i<=top;i++)
            cout<<a[i]<<" ";
    }
}obj;
int main(){
    int opt;
    char ch;
    do{
        cout<<"\nChoose from the option below:\n1.Stack Insertion\n2.Stack Deletion\n3.Printing\n";
        cin>>opt;
        cout<<"You choose option : "<<opt;
        switch (opt)
        {
        case 1:obj.push();
            break;
        case 2 : obj.pop();
        break;
        case 3 : obj.print();
        break;
        default: cout<<"Entered option isinvalid";
            break;
        }
        cout<<"\nDo you want to repeat(y/n)?";
        cin>>ch;
    }while(ch=='y'||ch=='Y');
}