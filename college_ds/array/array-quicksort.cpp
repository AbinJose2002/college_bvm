#include<iostream>
using namespace std;
class quickSort{
    public:
    int a[50], n, i;
    void quick_sort(int a[], int l, int u){
        int j;
        if(l<u){
            j = partition(a, l, u);
            quick_sort(a,l,j-1);
            quick_sort(a,j+1,u);
        }
    }
    int partition(int a[], int l, int u){
        int v, i ,j, temp;
        v = a[l];
        i = l;
        j = u+1;
        do{
            do
                i++;
            while(a[i]<v&&i<=u);
            do
                j--;
            while(v<a[j]);
            if(i<j){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }while(i<j);
        a[l] = a[j];
        a[j] = v;
        return j;
    }

    void input(){
        cout<<"Enter the number of elements of array ";
        cin>>n;
        cout<<"Enter the elements of array\n";
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        output();
    }

    void output(){
        cout<<"Array = ";
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
        case 3 : obj.quick_sort(obj.a,0,obj.n-1);
            cout<<"Sorting completed succesfully\n"; 
            break;    
        default: cout<<"Invalid input entered";
        }
        cout<<"\nDo you want to continue(y/n)?";
        cin>>ch;
    }while(ch=='y'||ch=='Y');
    return 0;
}
