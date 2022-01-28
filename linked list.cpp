#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
    	data=val;
    	next=NULL;
    }
};
void insertAtTail(node* &head, int val)
    {
    node* node1= new node(val);
    if(head==NULL){
        head=node1;
        return;
    }
    node* temp=head;
    while(temp-> next!=NULL){
        temp=temp->next;
    }
    temp->next=node1;

}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* head=NULL; ;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    return 0;
}
