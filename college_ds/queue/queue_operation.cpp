#include<iostream>
using namespace std;
class queue{
    public:
    int rear, front, i, n, item, a[100];
    queue(){
        cout<<"\n--Queue Operation--\n";
        rear = front = 0;
        cout<<"Enter The number of elements : ";
        cin>>n;
    }
    void insert(){
        if(rear==n){
            cout<<"Queue Overflow";
        }else{
            cout<<"\nEnter the item to insert";
            cin>>item;
            a[rear] = item;
            rear++;
        }
    }
    void deletion(){
        if(front==rear){
            cout<<"\nQueue is Underflow";
        }else{
            item = a[front];
            front++;
            cout<<endl<<item<<" deleted";
        }
    }
    void print(){
        cout<<"Elements of queue : ";
        for(i=front;i<rear;i++)
            cout<<a[i]<<" ";
    }
}obj;
int main(){
    int opt;
    char ch;
    do{
        cout<<"\nChoose from the option\n1.Insert\n2.Delete\n3.Print";
        cin>>opt;
        switch(opt){
            case 1 : obj.insert();
            break;
            case 2 : obj.deletion();
            break;
            case 3 : obj.print();
            break;
            default : cout<<"\nEntered option is invalid";
        }
        cout<<"\nDo you want to continue(y/n)?";
        cin>>ch;
    }while(ch=='y'||ch=='Y');
}