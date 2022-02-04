//node is created using class and not structure
//this source code contains operations(insertion at head, tail, after a node using linear search
//, searching node element using linear search mechanism, deleting ant node) on linked list

#include<iostream>
using namespace std;

class node{
    public:
    int info;
    node *next;

    node(int value){
        info = value;
        next = NULL;
    }
    
};

//node deletion
void deletion(node* &head, int val){
    node* temp = head;
    if(head==NULL){
        cout<<"Empty Linked List";
        return;
    }
    while(temp->next!=NULL){
        if(temp->next->info==val){
            node* toDelete = temp->next;
            cout<<temp->next->info<<" deleted"<<endl;
            temp->next = temp->next->next;
        }temp = temp->next;
    }
    
    delete temp;
}

//linear search throughout linked list
bool linearSearch(node* &head,int val){
    if(head==NULL){
        cout<<"Empty Linked List";
        return false;
    }
    node* temp = head;
    while(temp->next!=NULL){
        if(temp->info==val){
            cout<<temp->info;
            return true;    
        }
        temp = temp->next;
    }return false;
    delete temp;
}

//insert element after a node using linear serach
void insertAfterNode(node* &head, int val, int x){
    node* n = new node(x);
    node* temp = head;
    while(temp->next!=NULL){
        if(temp->info==val){
            n->next = temp->next;
            temp->next = n;
            return;
        }
        temp = temp->next;
    }

}

//insert at head
void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

//insert at tail
void insertAtTail(node* &head, int val){
    //new node 'n' is created with info->val & next -> NULL
    node* n = new node(val);//calls the constructor to input info->value & next->NULL
    if(head==NULL){
        head = n;
        return;
    }
    node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->info<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAtHead(head,5);
    display(head);
    bool x;
    x = linearSearch(head,5);
    if(x==true){
        cout<<" found"<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
    insertAfterNode(head,2,8);
    display(head);
    deletion(head,3);
    display(head);
    return 0;
}