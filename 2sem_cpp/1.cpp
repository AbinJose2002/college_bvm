/*Write a C++ program to make a class Matrix. Implement functions read ()
and display() for reading and displaying the content of the matrix respectively.
Overload the binary operator + to find the sum of two matrices.*/

#include<iostream>
using namespace std;
class matrix{
    public:
    int n, i, j, a[10][10];
    matrix(int a){
        n = a;
    }
    void input(){
        cout<<"Enter the elements of matrix : ";
        for(i = 0; i<n; i++){
            for( j = 0; j<n; j++){
                cin>>a[i][j];
            }
        }
    }
    matrix operator +(matrix obj2){
        matrix obj(n);
        for(i = 0; i<n; i++){
            for( j = 0; j<n; j++){
                obj.a[i][j] = a[i][j] + obj2.a[i][j];
            }
        }
        return obj;
    }
};
int main(){
    cout<<"Enter the order of matrix's : ";
    int n;
    cin>>n;
    matrix obj1(n), obj2(n), obj3(n);
    obj1.input();
    obj2.input();
    obj3 = obj1 + obj2;
    for(int i =0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<obj3.a[i][j]<<" ";
        }cout<<endl;
    }
}