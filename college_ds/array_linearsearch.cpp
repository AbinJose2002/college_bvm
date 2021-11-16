#include<iostream>
using namespace std;

class linearSearch{
    public:

    int a[100], n, i, item, loc = 0;
    
    void input();

    void search();

    void output();
};

int main(){
    linearSearch obj;
    obj.input();
    obj.search();
    obj.output();
    return 0;
}

void linearSearch::input(){
    cout<<"Enter the number of elements of array ";
    cin>>n;
    cout<<"Enter the elements of array\n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the item to be searched ";
    cin>>item;
}

void linearSearch::search(){
    for(i=0;i<n;i++){
        if(a[i]==item){
            loc = i+1;
        }
    }
}

void linearSearch::output(){
    if(loc==0){
    cout<<"Element not found";
    }else{
    cout<<item<<" found at position "<<loc;
    }
}