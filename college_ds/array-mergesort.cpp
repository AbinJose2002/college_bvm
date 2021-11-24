#include<iostream>
using namespace std;
class mergeSort{
    public:
    int a[100], b[100], n, i, k;

    void input(){
        cout<<"Enter the number of elements";
        cin>>n;
        cout<<"Enter the elements of array";
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        low = 0;
        mergesort(low ,n-1);
    }

    int mid, low, high;
    void mergesort(int, int){
        mid = (low+high)/2;
        mergesort(low,mid);
        mergesort(mid+1,high);
        merge(low, mid, high);
    }

    void merge(int low, int mid, int high){
        int h = low, i = low, j = mid+1;
        while((h<=mid)&&(j<=high)){
            if(a[h]<=a[j]){
                b[i] = a[h];
                h++;
            }
            else{
                b[i] = a[j];
                j++;
            }
        }
        if(h>mid){
            for(k = j; k<=high; k++){
                b[i] = a[k];
                i++;
            }
        }else{
            for(k = h; k<=mid; k++){
                b[i] = a[k];
                i++;
            }
        }
        for(k=low;k<=high;k++){
            a[k] = b[k];
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
    obj.output();
    return 0;
}