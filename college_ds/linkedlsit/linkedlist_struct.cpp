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
            cout<<head->data;
            return;
        }
        cout<<"Enter the node element : ";
        cin>>node_item;
        node* temp = new node;
        temp = head;
        while(temp->data!=node_item){
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
        while(temp->next->data!=node_item){
            if(temp->next == NULL){
                return;
            }
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
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
    void deleteAfterNode(){
        node* deleteNode = new node;
        node* temp = head;
        cout<<"Enter the node element : ";
        cin>>node_item;
        while(temp->data!=node_item){
            temp = temp->next;
        }
        deleteNode = temp->next;
        cout<<"Node element "<<deleteNode->data<<" deleted\n";
        temp->next = temp->next->next;
    }
    void deleteBeforeNode(){
        node* deleteNode = new node;
        node* temp = head;
        cout<<"Enter the node element : ";
        cin>>node_item;
        if(temp->next->data==node_item){
            deleteNode = head;
            head = temp->next;
            cout<<"Node element "<<deleteNode->data<<" deleted\n";
            return;
        }
        while(temp->next->next->data!=node_item){
            temp = temp->next;
        }
        deleteNode = temp->next;
        cout<<"Node element "<<deleteNode->data<<" deleted\n";
        temp->next = temp->next->next;
    }
    void sort(){
        node* sort_temp = new node;
        node* temp1 = head;
        node* temp2 = head->next;
        for(temp1->next;temp1->next!=NULL;temp1=temp1->next){
            for(temp2->next;temp2->next!=NULL;temp2=temp2->next){
                if(temp1->data > temp2->data){
                    cout<<"hello";
                    sort_temp = temp1;
                    temp1 = temp2;
                    temp2 = sort_temp;
                }
            }
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
    do{
        cout<<"Enter from the options : \n1.Insert\t2.Delete\t3.Display\t4.Sort\n";
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
            case 2 : cout<<"Deletion\n1.At end\t2.At head\n3.After node\t4.Before node\n";
                cin>>opt;
                switch(opt){
                    case 1 : obj.deleteAtEnd();
                    break;
                    case 2 : obj.deleteAtHead();
                    break;
                    case 3 : obj.deleteAfterNode();
                    break;
                    case 4 : obj.deleteBeforeNode();
                    break;
                }
            break;
            case 3 : obj.display();
            break;
            case 4 : obj.sort();
            break;
            default : cout<<"\nInvalid choice input\n";
        }
        cout<<"\nDo you want to continue(y/n)?";
        cin>>ch;
    }while(ch=='Y'||ch=='y');
}