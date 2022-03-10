#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
class link_list{
    public:
    int item, node_item;
    node* head;
    link_list(){
        head = NULL;
    }
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
    void insertAtHead(){
        cout<<"\nEnter the item to input : ";
        cin>>item;
        node* n = new node;
        n->next = NULL;
        n->data = item;
        if(head == NULL){
            head = n;
            return;
        }
        node* temp = head;
        head = n;
        n->next = temp;
    }
    void insertAfterNode(){
        cout<<"\nEnter the item to input : ";
        cin>>item;
        node* n = new node;
        n->next = NULL;
        n->data = item;
        if(head == NULL){
            cout<<"\nNo node found so inserted at head\n";
            head = n;
            return;
        }
        cout<<"Enter the node element : ";
        cin>>node_item;
        node* temp = head;
        while(temp->data!=item){
            if(temp->next == NULL)
                return;
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
    }
    void insertBeforeNode(){
        cout<<"Enter the node element : ";
        cin>>node_item;
        if(head->data==node_item){
            insertAtHead();
            return;
        }
        cout<<"\nEnter the item to input : ";
        cin>>item;
        node* n = new node;
        n->next = NULL;
        n->data = item;
        if(head == NULL){
            cout<<"\nNo node found so inserted at head\n";
            head = n;
            return;
        }
        node* temp = head;
        while(temp->next->data!=item){
            if(temp->next == NULL)
                return;
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
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
        cout<<"Enter from the options : \n1.Insert\t2.Delete\t3.Display\n";
        cin>>opt;
        switch(opt){
            case 1 : cout<<"Insertion\n1.At end\t2.At head\n3.After node\t4.Before node\n";
                cin>>opt;
                switch(opt){
                    case 1 : obj.inputAtEnd();
                    break;
                    case 2 : obj.insertAtHead();
                    break;
                    case 3 : obj.insertAfterNode();
                    break;
                    case 4 : obj.insertBeforeNode();
                    break;
                }
            break;
            case 3 : obj.display();
        }
        cout<<"\nDo you want to continue(y/n)?";
        cin>>ch;
    }while(ch=='Y'||ch=='y');
}