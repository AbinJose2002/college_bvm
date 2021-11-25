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
        cout<<"How many elements";
        cin>>n;
        cout<<"\nEnter elements of array";
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        quick_sort(a,0,n-1);
    }

    void display(){
    cout<<"\nArray after sorting : ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    }
}obj;
int main(){
    obj.input();
    obj.display();    
    return 0;
}