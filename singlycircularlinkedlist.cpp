#include<iostream>
using namespace std;
class node{
	int data;
	node *next;
	node(int x){
		this->data=x;
		this->next=NULL;
	}
};
int main(){
	node*temp=NULL;
	node*head=NULL;
	node*newnode=NULL;
	int will;
	int data;
	cout<<"eneter your choice of creation of newnode "<<endl;
	cin>>will;
	while(will){
		cout<<"enter the data to node"<<endl;
		cin>>data;
        newnode=new node(data);
		if(head==NULL){
			temp=head=newnode;
		}		
		else{
			temp->next=newnode;
			temp=temp->next;
		}
		newnode->next=head;
		cout<<"pressany key other than 0 for creation"<<endl;
		cin>>will;
	}
	// logic  for display the data of the node
	temp=head;
	while(temp->next!=head){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	cout<<temp->data<<endl;
}
