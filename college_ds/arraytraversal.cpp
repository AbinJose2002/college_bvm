#include<iostream>
using namespace std;

class elementInsert{
    public:

    int n, a[100], i;

    void print();
}ins1;


void elementInsert::print(){
    cout<<"Enter the nuber of elements in array";
    cin>>n;
    cout<<"Enter the elements of array";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Elements of array : ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    ins1.print();
    return 0;
}