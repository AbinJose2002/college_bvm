#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
class link_list{
    public:
    int item;
    int node_item;
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
    void deleteAtHead(){
        node* deleteNode = head;
        node* temp = head;
        head = temp->next;
        cout<<"Node element "<<deleteNode->data<<" deleted\n";
        delete deleteNode;
    }
    void deleteAtEnd(){
        node* deleteNode = new node;
        node* temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        deleteNode = temp->next;
        cout<<"Node element "<<deleteNode->data<<" deleted\n";
        temp->next = NULL;
    }
    void deleteInfo(){
        node* deleteNode = new node;
        node* prev = head;
        cout<<"Enter the node element : ";
        cin>>node_item;
        node* temp = prev->next;
        if(prev->data==node_item){
            deleteAtHead();
            return;
        }
        while(temp->data!=node_item&&temp->next!=NULL){
            prev = prev->next;
            temp = temp->next;
        }
        if(temp->data==node_item){
            deleteNode = temp;
            cout<<"Node element "<<deleteNode->data<<" deleted\n";
            prev->next = temp->next;
        }else{
            cout<<"\nnode element not found\n";
            return;
        }
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
    cout<<"--Singly linked list operation--\n";
    do{
        cout<<"Enter from the options : \n1.Insert\t2.Delete\n3.Display\t4.Exit\n";
        cin>>opt;
        switch(opt){
            case 1 : cout<<"Insertion\n1.At end\t2.At head\n";
                cin>>opt;
                do{
                    switch(opt){
                        case 1 : obj.inputAtEnd();
                        break;
                        case 2 : obj.insertAtHead();
                        break;
                    }
                    cout<<"\nDo you want to repeat insertion(y/n)? ";
                    cin>>ch;
                }while(ch=='y'||ch=='Y');
            break;
            case 2 : cout<<"Deletion\n1.At end\t2.At head\n3.Info\n";
                cin>>opt;
                switch(opt){
                    case 1 : obj.deleteAtEnd();
                    break;
                    case 2 : obj.deleteAtHead();
                    break;
                    case 3 : obj.deleteInfo();
                    break;
                }
            break;
            case 3 : obj.display();
            break;
            case 4 : exit(0);
            default : cout<<"\nInvalid choice input\n";
        }
    }while(1);
}