#include<iostream>
using namespace std;

class node{
public:

	node* next;
	int data;
	node(int data){
			this->data=data;
			next=NULL;
	}
};



class Queue{
node*head;
node*tail;
int len;
public:
Queue(){
	head=NULL;
	tail=NULL;
	len=0;
}

void push(int data){
	node*n=new node(data);

	//ll khali h
	if(head==NULL){
		head=n;
		tail=n;
		len++;
	}
	//ll khali nhi h
	else{
		tail->next=n;
		tail=n;
		len++;
	}
}

void pop(){
	//delete at front
	//ll khali h
	if(head==NULL){
		return;
	}
	//ll mei ek single element h
	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;
		len--;
	}
	//ll mei multiple nodes hue
	else{
		node* temp=head;
		head=head->next;
		delete temp;
		temp=NULL;
		len--;
	}

}
//top() in queue it is called front

int front(){
	if(len!=0){
		return head->data;
	}
}

//empty()
bool empty(){
	// if(len==0){
	// 	return true;
	// }
	// else{
	// 	return false;

	// }
	return len==0;
}


//size()
int size(){
	return len;
}




};

int main(){
	Queue a;
	a.push(5);
	a.push(6);
	a.pop();
	cout<<a.empty();
	a.push(10);
	cout<<a.size();

	//printing queue...
	while(!a.empty()){
	cout<<a.front()<<" ";
	a.pop();
}
}