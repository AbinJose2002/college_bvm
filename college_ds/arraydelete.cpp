#include<iostream>
using namespace std;

class elementDelete{
    public:

    int n, i, a[100], value, index;

    void input();

    void operation();

    void print();
}ins1;

void elementDelete::input(){
    cout<<"Enter the nuber of elements in array";
    cin>>n;
    cout<<"Enter the elements of array";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
}

void elementDelete::operation(){
    cout<<"Enter the index of position";
    cin>>index;
    value = a[index];
    for(i=index;i<=n;i++){
        a[i] = a[i+1];
    }
    n--;
}

void elementDelete::print(){
    cout<<"Deleted value = "<<value;
    cout<<"\nElements of array : ";
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