#include<iostream>
using namespace std;

class Node{
  public:
  	int data;
  	Node* f;
  	Node* b;

  Node(int data){
  	this->data=data;
  	f=NULL;
  	b=NULL;
  }
};

void insertatfront(Node* &head,Node* &tail, int data){
 		Node* newNode=new Node(data);
 		if(head==NULL){
 			//ll khali h
 			head=newNode;
 			tail=newNode;
 		}
 		else{
 			newNode->f=head;
 			head->b=newNode;
 			head=newNode;
 		}
}

void printll(Node* head){

	Node* temp=head;
	while(temp!=NULL){
		cout<<head->data<<" ";
		temp=temp->f;
	}
}

void printllreverse(Node* head){

	Node* temp=head;
	while(temp!=NULL){
		cout<<head->data<<" ";
		temp=temp->b;
	}
}
int main(){

	Node* head=NULL;
	Node* tail=NULL;
	insertatfront(head,tail,4);
	insertatfront(head,tail,89);
	insertatfront(head,tail,8);
}