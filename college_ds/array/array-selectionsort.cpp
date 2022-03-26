#include<iostream>
using namespace std;
class selectionSort{
    public:
    int n, m, i, a[100], temp, loc;

    void min(int i, int n){
        int min = a[i];
        loc = i;
        for(int j=i+1;j<n;j++){
            if(min>a[j]){
                min = a[j];
                loc = j;
            }
        }
    }

    void input(){
        cout<<"Enter the number of elements of array ";
        cin>>n;
        cout<<"Enter the elements of array\n";
        for(i=0;i<n;i++){
            cin>>a[i];
        }
    }

    void sort(){
        for(i=0;i<n;i++){
            min(i,n);
            temp = a[i];
            a[i] = a[loc];
            a[loc] = temp;
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
            break;
        case 2 : obj.output();
            break;
        case 3 : cout<<"Sorting completed succesfully\n"; 
            obj.sort();
            break;    
        default: cout<<"Invalid input entered";
        }
        cout<<"\nDo you want to continue(y/n)?";
        cin>>ch;
    }while(ch=='y'||ch=='Y');
    return 0;
}