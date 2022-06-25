#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int roll_no;
    char name[50];
    int total_mar;
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
        cout<<"Enter the total mark : ";
        cin>>temp->total_mar;        
        if(head==NULL){
            head = temp;
        }else{
            node* n = head;
            while(n->next!=NULL){
                n = n->next;
            }
            n->next = temp;
        }        
    }
    void display(){
        node* temp = head;
        while(temp){
            cout<<"Roll number = "<<temp->roll_no<<endl<<"Name = "<<temp->name<<endl;
            cout<<"Total mark of subject : "<<temp->total_mar<<endl;
            temp = temp->next;
        }
    }
    void deletion(){
        int roll;
        node * ptr;
        node * prev;
        if(head==NULL){
            cout<<"List is empty";
        }else{
            cout<<"Enter the roll number to delete : ";
            cin>>roll;
            for(ptr = head; ptr->next!=NULL;ptr = ptr->next){
                if(ptr->roll_no==roll){
                    break;
                }else
                    prev = ptr;
            }
            if(ptr->roll_no==roll){
                if(ptr==head){
                    if(ptr->next==NULL)
                        head = NULL;
                    else
                        head = head->next;
                }else{
                    prev->next = ptr->next;
                }
                delete ptr;
                cout<<"\nSuccesfully deleted roll number : "<<roll<<endl;
            }else{
                cout<<endl<<roll<<" is not in the list\n";
            }
        }
    }
};
int main(){
    stud obj;
    int opt;
    char ch;
    do{
        cout<<"Choose from the options below :\n1.Insert\t2.Display\n3.Delete\t4.Exit\n";
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
            case 3 : obj.deletion();
            break;
            case 4 : exit(0);
            default : cout<<"Invalid option inputed";
        }
    }while(1);
}