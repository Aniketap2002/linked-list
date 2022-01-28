#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* Next;
};
void print(node* start)
{
	while(start!=NULL){
		
		cout<<start->data<<endl;
		start=start->Next;
	}
}
int main(){
	node* first=NULL;
	node* sec =NULL;
	node* third =NULL;
	first=new node();
	sec = new node();
	third = new node();
    first->data=1;
    first->Next=sec;
    sec->data=2;
    sec->Next=third;
    third->data=3;
    third->Next=NULL;
    print(first);
}



