#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int roll_no;
    char name[50];
    int mark[3];
    struct node* next;
};
class stud{
    public:
    node* head = NULL;
    void insert(){
        node* temp = new node;
        temp->next = NULL;
        cout<<"Enter the roll number of student : ";
        cin>>temp->roll_no;
        cout<<"Enter the name of student : ";
        cin>>temp->name;
        for(int i = 0; i<3; i++){
            cout<<"Enter the mark of subject "<<i+1<<" : ";
            cin>>temp->mark[i];
        }
        if(head==NULL){
            head = temp;
            return;
        }
        node* n = head;
        while(n->next!=NULL){
            n = n->next;
        }
        n->next = temp;
    }
    void display(){
        node* temp = head;
        while(temp->next!=NULL){
            cout<<"Roll number = "<<temp->roll_no<<endl<<"Name = "<<temp->name<<endl;
            for(int i = 0; i<3; i++){
                cout<<"Mark of subject "<<i+1<<" : "<<temp->mark[i]<<endl;
            }
            temp = temp->next;
        }
        cout<<"\nRoll number = "<<temp->roll_no<<endl<<"Name = "<<temp->name<<endl;
        for(int i = 0; i<3; i++){
                cout<<"Mark of subject "<<i+1<<" : "<<temp->mark[i]<<endl;
        }
    }
};
int main(){
    stud obj;
    int opt;
    char ch;
    do{
        cout<<"Choose from the options below :\n1.Insert\t\t2.Display\n3.Exit\n";
        cin>>opt;
        switch(opt){
            case 1 : 
            do{
                obj.insert();
                cout<<"\nDo you want to repaet insertion(y/n)?";
                cin>>ch;
            }while(ch=='y'||ch=='Y');
            break;
            case 2 : obj.display();
            break;
            case 3 : exit(0);
            default : cout<<"Invalid option inputed";
        }
    }while(1);
}