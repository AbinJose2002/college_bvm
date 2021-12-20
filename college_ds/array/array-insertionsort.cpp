#include<iostream>
using namespace std;
class insertionSort{
    public:
    int n, m, i, a[100], temp, ptr;

    void input(){
        cout<<"Enter the number of elements of array ";
        cin>>n;
        cout<<"Enter the elements of array\n";
        for(i=0;i<n;i++){
            cin>>a[i];
        }
    }

    void sort(){
        for(i=1;i<n;i++){
            temp = a[i];
            ptr = i-1;
            while(temp<a[ptr] && ptr>=0){
                a[ptr+1] = a[ptr];
                ptr = ptr-1;
            }
            a[ptr+1] = temp;
        }
        
    }
    void output(){
        cout<<"Sorted array = ";
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    } 
}obj;

int main(){
    obj.input();
    obj.sort();
    obj.output();
    return 0;
}