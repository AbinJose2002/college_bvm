#include<iostream>
using namespace std;

class elementInsert{
    public:

    int n, i, a[100], value, index;

    void input();

    void operation();

    void print();
}ins1;

void elementInsert::input(){
    cout<<"Enter the nuber of elements in array";
    cin>>n;
    cout<<"Enter the elements of array";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
}

void elementInsert::operation(){
    cout<<"Enter the index of position";
    cin>>index;
    cout<<"Enter the element to be inserted";
    cin>>value;
    for(i=n;i>=index;i--){
        a[i+1] = a[i];
    }
    a[index] = value;
    n++;
}

void elementInsert::print(){
    cout<<"Elements of array : ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    ins1.input();
    ins1.operation();
    ins1.print();
    return 0;
}