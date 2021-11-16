#include<iostream>
using namespace std;
class binarySearch{
    public:
    int n, item, i, a[100], beg, end, mid, loc;

    void input(){
        cout<<"Enter the number of elements of array ";
        cin>>n;
        cout<<"Enter the elements of array\n";
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<"Enter the item to be searched ";
        cin>>item;
    }

    void search(){
        i = 0;
        beg = i;
        end = n;
        mid = int(beg+end)/2;
        while(beg<=end && a[mid] != item){
            if(item<a[mid]){
                end = mid-1;
            }else{
                beg = mid+1;
            }
            mid = int(beg+end)/2;
        }
        if(a[mid]==item){
            loc = mid;
        }
    }
    void output(){
        if(loc!=0){
        cout<<"element found at position "<<loc;
        }else{
            cout<<"Element not found";
        }
    } 
}obj;

int main(){
    obj.input();
    obj.search();
    obj.output();
    return 0;
}