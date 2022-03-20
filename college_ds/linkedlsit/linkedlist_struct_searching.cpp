#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
class linklist_search{
    public:
    int item;
    node* head;
    void inputAtEnd(){
        cout<<"\nEnter the item to input : ";
        cin>>item;
        node* n = new node;
        n->data = item;
        n->next = NULL;
        if(head == NULL){
            head = n;
            return;
        }
        node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = n;
        
    }
    void search(){
        node* temp = head;
        cout<<"Enter the item to find : ";
        cin>>item;
        while(temp->next!=NULL){
            if(temp->data==item){
                cout<<item<<" found";
                return;
            }
            temp = temp->next;
        }
        if(temp->data==item){
                cout<<item<<" found";
                return;
            }
        cout<<item<<" not found";
    }
    void display(){
        node* temp = head;
        while(temp->next!=NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<temp->data<<" -> NULL";
    }
}obj;
int main(){
    int opt;
    char ch;
    do{
        cout<<"Enter from the options : \n1.Insert\t2.Search\n3.Display\n";
        cin>>opt;
        switch(opt){
            case 1 : cout<<"Insertion\n";
                obj.inputAtEnd();
            break;
            case 2 : cout<<"Searching\n";
                obj.search();
            break;
            case 3 : obj.display();
            break;
            default : cout<<"\nInvalid choice input\n";
        }
        cout<<"\nDo you want to continue(y/n)?";
        cin>>ch;
    }while(ch=='Y'||ch=='y');
}
