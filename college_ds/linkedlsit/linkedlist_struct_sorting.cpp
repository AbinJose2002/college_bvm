#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
class linklist_search{
    public:
    int item, temp;
    node* head;
    void inputAtEnd(){
        cout<<"\nEnter the item to input : ";
        cin>>item;
        node* n = new node;
        n->data = item;
        n->next = NULL;
        if(head == NULL){
            head = n;
        }else{
            node* temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = n;
        }   
        char ch;    
        cout<<"Do you want to repeat insertion(y/n)?";
        cin>>ch;
        if(ch=='y'||ch=='Y')
            inputAtEnd();
        else
            return; 
    }
    void sort(){
        node* temp = head;
        while (temp) {
            node* min = temp;
            node* r = temp->next;
            while (r) {
                if (min->data > r->data)
                    min = r;
                r = r->next;
            }
            int x = temp->data;
            temp->data = min->data;
            min->data = x;
            temp = temp->next;
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
        cout<<"\nEnter from the options : \n1.Insert\t2.Sort\n3.Display\t4.Exit\n";
        cin>>opt;
        switch(opt){
            case 1 : cout<<"Insertion\n";
                obj.inputAtEnd();
            break;
            case 2 : cout<<"Sorting\n";
                obj.sort();
            break;
            case 3 : obj.display();
            break;
            case 4 : exit(0);
            default : cout<<"\nInvalid choice input\n";
        }
    }while(1);
}
