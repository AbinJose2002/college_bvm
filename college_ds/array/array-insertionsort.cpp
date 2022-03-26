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
    int opt;
    char ch;
    do{
        cout<<"Enter the choice from below\n1.Input\t2.Display\n3.Sort\n";
        cin>>opt;
        switch (opt)
        {
        case 1 : obj.input();
            obj.output();
            break;
        case 2 : obj.output();
            break;
        case 3 : obj.sort();
            cout<<"Sorting completed succesfully\n"; 
            break;    
        default: cout<<"Invalid input entered";
        }
        cout<<"\nDo you want to continue(y/n)?";
        cin>>ch;
    }while(ch=='y'||ch=='Y');
    return 0;
}