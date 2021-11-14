#include<iostream>
using namespace std;

class elementTraversal{
    public:

    int n, a[100], i;

    void input();

    void print();
}ins1;

void elementTraversal::input(){
    cout<<"Enter the nuber of elements in array";
    cin>>n;
    cout<<"Enter the elements of array";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
}

void elementTraversal::print(){
    cout<<"Elements of array : ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    ins1.input();
    ins1.print();
    return 0;
}