#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

//deletion(at head, at tail, node)
void deletion(node* &head){
    cout<<"Enter the node to delete : ";
    int val;
    cin>>val;
    node* temp = head;
    node* toDelete;
    if(temp->data==val){
        toDelete = temp;
        while(temp->next!=head){
            temp = temp->next;
        }
        head = head->next;
        temp->next = head;
        return;
    }
    while (temp->next!=head)
    {
        if(temp->next->data==val){
            toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
        temp = temp->next;
    }
    
}

void deletionAtHead(node* &head){
    node* toDelete;
    node* temp = head;
    toDelete = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    head = head->next;
    temp->next = head;
    delete toDelete;
}

void deletionAtTail(node* &head){
    node*temp = head;
    while(temp->next->next!=head){
        temp = temp->next;
    }
    node* toDelete = temp->next;
    temp->next = head;
    delete toDelete;
}

//insertions(at head, at tail, after node)
void insertAtTail(node* &head){
    cout<<"Enter the value : ";
    int val;
    cin>>val;
    node* n = new node(val);
    if(head==NULL){
        head = n;
        head->next = head;  
        return;  
    }
    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    if(temp->next==head){
        temp->next = n;
        temp = temp->next;
        temp->next = head;
    }
}

void insertAfterNode(node* &head){
    cout<<"\nEnter the node in which value to insert: ";
    int item_val, node_val;
    cin>>node_val;
    cout<<"Enter the value to insert: ";
    cin>>item_val;
    node* n = new node(item_val);
    node* temp = head;
    
    while(temp->next!=head){
        if(temp->data==node_val){
            n->next = temp->next;
            temp->next = n;
            return;
        }
        temp = temp->next;
    }
}

void insertAtHead(node* &head){
    cout<<"\nEnter the value : ";
    int val;
    cin>>val;
    node* n = new node(val);
    if(head==NULL){
        head = n;
        head->next = head;  
        return;  
    }
    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
    
}

void display(node* &head){
    node* temp = head;
    if(temp==NULL){
        cout<<"\nLinked list is empty\n";
    }
    while(temp->next!=head){
        cout<<temp->data<<" -> ";
        temp = temp->next;
        
    }
    cout<<temp->data<<" -> NULL";
}

int main(){
    node* head = NULL;
    cout<<"Insrtion at tail\n";
    insertAtTail(head);
    insertAtTail(head);
    insertAtTail(head);
    display(head);
    cout<<"\nInsertion at head";
    insertAtHead(head);
    display(head);
    cout<<"\nInsrtion after node";
    insertAfterNode(head);
    display(head);
    cout<<"\nDeletion at head\n";
    deletionAtHead(head);
    display(head);
    cout<<"\nDeletion at tail\n";
    deletionAtTail(head);
    display(head);
    cout<<"\nDeleteion of a particular node\n";
    deletion(head);
    display(head);
}
