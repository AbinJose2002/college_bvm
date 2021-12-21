#include<iostream>
using namespace std;
class circularQueue{
    public:
    int front, rear, n, a[100], i, item;
    circularQueue(){
        cout<<"\n--Circular Queue Operation--\n";
        front = rear = 0;
        cout<<"\nENter the size of queue";
        cin>>n;
    }
    void insert(){
        if((rear==n&&front==1)||(front==rear+1)){
            cout<<"\nOverflow\n";
        }else{
            if(front==0){
                front = rear = 1;
            }else if(rear==n){
                rear = 1;
            }else{
                rear++;
            }
        }
        cout<<"\nEnter the element to insert\n";
        cin>>item;
        a[rear] = item;
    }
    void deletion(){
        if(front==0){
            cout<<"\nQueue underflow\n";
        }else{
            item = a[rear];
            if(front==rear){
                front = rear = 0;
            }else if(front==n){
                front = 1;
            }else{
                front++;
            }
        }
    }
    void display(){
        cout<<"\nElements of circular queues are : ";
        if(front>rear){
            for(i=1;i<=rear;i++)
                cout<<a[i]<<" ";
            for(i=front;i<=n;i++)
                cout<<a[i]<<" ";
        }else{
            for(i=front;i<=rear;i++)
                cout<<a[i]<<" ";
        }
    }
}obj;
int main(){
    int opt;
    char ch;
    do{
        cout<<"Choose from the option\n1.INsertion\n2.Deletion\n3.Display";
        cin>>opt;
        switch(opt){
            case 1 : obj.insert();
            break;
            case 2 : obj.deletion();
            break;
            case 3 : obj.display();
            break;
            default : cout<<"\nEntered input is invalid";
        }
        cout<<"\nDo you want to continue(y/n)?";
        cin>>ch;
    }while(ch=='y'||ch=='Y');
}