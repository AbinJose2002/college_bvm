#include<iostream>
using namespace std;
class DM;
class DB{   
    public:
    int feet, inch;
    void input(){
        cout<<"Enter feet and inch";
        cin>>feet>>inch;
    }
    friend void add(DB,DM);
}objdb;
class DM{
    public:
    int m, cm;
    void input(){
        cout<<"Enter meter and centimeter";
        cin>>m>>cm;
    }
    friend void add(DB,DM);
}objdm;
void add(DB obj1, DM obj2){
    int m = 0, cm = 0, inch = 0;
    inch = obj1.feet * 12;
    inch += obj1.inch;
    cm += inch*2.5;
    cm += obj2.cm;
    m = cm/100;
    cm %= 100;
    m += obj2.m;
    cout<<"Meter = "<<m<<"\nCentimeter = "<<cm<<endl;
}
int main(){
    objdb.input();
    objdm.input();
    add(objdb,objdm);
}