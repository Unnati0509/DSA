#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node(int data){
		this->data=data;
		next=NULL;
	}
};
class Stack{
Node* head;
int len;
Stack(){
	head=NULL;
	len=0;
}	
//push
void push(int data)
{ //insertatfront
	Node* newnode=new Node(data);
	newnode->next=head;
	head=newnode;

	len++;
}

//pop
void pop(){
	if(head==NULL){
		return;
	}
	else if(head->next==NULL){
		delete head;
		head=NULL;
		len--;
	}
	else{
		Node* temp=head;
		head=head->next;
		delete temp;
		temp=NULL;
		len--;
	}
}

//top
int top(){
	return head->data;
}

//empty
bool isEmpty(){
	// if(head==NULL){
	// return true;
	// }
	// else{
	// 	return false;
	// }
	// if(len==0){
	// 	return true;
	// }
	// else{
	// 	return false;
	// }
	return len==0;
}

//size
int size(){
	return len;
}
}
int main(){
	Stack s;
	s.push(80);
	s.push(96);
	s.push(55);
	s.push(88);
	s.push(6);
	s.push(9);
	s.pop();

	while(s.isEmpty()){
	cout<<s.top()<<" ";
	s.pop();
}
	return 0;


}