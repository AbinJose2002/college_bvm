/*
Write a C++ program to create a class called Student having data members
application number, student name, percentage of mark. Create an array of objects
of type Student and display the details of Students in descending order of
percentages of mark. The member functions are to be coded outside the class.
*/

#include<iostream>
using namespace std;
class student{
    public:
    int appl_no;
    char stud_name[50];
    float percent;
    void input(){
        cout<<"Enter the name : ";
        cin>>stud_name;
        cout<<"Enter the application number : ";
        cin>>appl_no;
        cout<<"Enter the percent : ";
        cin>>percent;
        display();
    }
    void display(){
        cout<<"\nName of student : "<<stud_name<<"\nApplication number of student : "<<appl_no<<"\nPercentage of mark of student : "<<percent<<endl;
    }
}stud[10];
int main()
{
    cout<<"Enter the number of students : ";
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        stud[i].input();
        cout<<endl;
    }
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(stud[i].percent<stud[j].percent){
                student temp;
                temp = stud[i];
                stud[i] = stud[j];
                stud[j] = temp;
            }
        }
    }
    cout<<"Descending order of percent\n";
    for(int i = 0; i<n; i++){
        cout<<"\nPercent : "<<stud[i].percent<<"\napplication number : "<<stud[i].appl_no<<"\nName : "<<stud[i].stud_name<<endl;
    }
    return 0;
}