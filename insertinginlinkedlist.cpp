#include<iostream>
using namespace std;
class Node{
public:
	int data;
	Node* next;

	Node(int d){
		data=d;
		next=NULL;
	}

};
void insertatfront(Node * &head, Node * &tail, int data){
	// int *ptr=new int;
	Node *n=new Node(data);
    //if Linked list is empty(ie. head is NULL)
    if(head==NULL){
    	head=n;
    	tail=n;
    }
   //Linked list is not empty
    n->next=head;
    head=n;
}
int lengthofll(Node *head){
	Node *temp=head;
	int count=0;
	while(temp!=NULL){
	count++;
	temp=temp->next;
}
return count;
}

// void printNode(Node *head)
void insertattail(Node* &head, Node* &tail, int data){
	Node* n=new Node(data);
	if(head==NULL){
		head=n;
		tail=n;
	}
	else{
	tail->next=n;
	tail=n;
}
}
void printNode(Node *head){

	Node *temp=head;
	while(temp!=NULL){
	cout<< temp->data<< " ";
	temp=temp->next;
}
}
void insertatanypos(Node *&head,Node* &tail,int data,int position ){

if(position==0){
	insertatfront(head,tail,data);
}
else if(position>=lengthofll(head)){
	insertattail(head,tail,data);
}
else{
	Node* temp=head;
	for(int jump=1;jump<=position-1;jump++){
		temp=temp->next;
	}
	Node *n=new Node(data);
	n->next=temp->next;
	temp->next=n;
}

}


int lengthofllrecursive(Node *head){

	//base case
	if(head->next==NULL){
		return 0;
	}

	//recursive case
	return 1+lengthofllrecursive(head->next);
}

void deleteatfront(Node *&head, Node *&tail){
	//ll is not present
	if(head==NULL){
		return;
	}
	//is node is single..
	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;
	}
	//multiple nodes
	else{
		Node *temp=head;
		head=temp->next;
		delete temp;
		temp=NULL;
	}
}

void deleteatend(Node *&head,Node *&tail){
   if(head==NULL){
		return;
	}
	//is node is single..
	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;
	}
	else{
		Node *temp=head;
		for(int jump=1;jump<=lengthofll(head)-2;jump++){
			temp=temp->next;
		}
		delete tail;
		tail=temp;
		tail->next=NULL;
	}
}

void deleteatanyposi(Node *&head, Node*&tail, int position){
if(position==0){
	deleteatfront(head,tail);
}
else if(position>=lengthofll(head)){
	deleteatend(head,tail);
}
else{
	Node *temp=head;
	for(int jump=1;jump<position-1;jump++){
		temp=temp->next;
	}
	Node *a=temp->next;
	temp->next=temp->next->next;
	delete a;
	a=NULL;
}
}
bool findkeyofaNode(Node *&head, int key){
	Node* temp=head;
	int i=0;
	while(i<lengthofll(head)){
		if(temp->data!=key){
			temp=temp->next;
			i++;
		}
		else{
			return true;
		}
	}
	return false;
}
//To find middle of the linked list...//
//length/2, without using length function..
int midpointofll(Node *head,Node *tail){
	Node*slow=head;//Even ke case mei second midpoint wala deta h

	Node*fast=head;
	while(fast!=NULL and fast->next!=NULL){
	//For odd length
	slow=slow->next;
	fast=fast->next->next;
}

return slow->data;
}
Node* midpointofll2(Node *head,Node *tail){
	Node*slow=head;//Even ke case mei first midpoint wala deta h

	Node*fast=head->next;
	while(fast!=NULL and fast->next!=NULL){
	//For odd length
	slow=slow->next;
	fast=fast->next->next;
}

return slow->data;
}

void bubblesortll(Node *head){
	for(int i=0;i<lengthofll(head)-2;i++)
{
	for(Node* j =head;j->next!=NULL;j=j->next){
		if((j->data)>((j->next)->data)){
			swap(j->data,j->next->data);
		}
	}

}
}
int main(){
Node* head=NULL;
Node* tail=NULL;
insertatfront(head,tail,4);
insertatfront(head,tail,8);
insertatfront(head,tail,18);
insertattail(head,tail,30);
// printNode(head);
insertatanypos(head,tail,45,0);
insertatanypos(head,tail,45,5);
insertatanypos(head,tail,45,3);
printNode(head);
cout<<endl;
// cout<<lengthofllrecursive(head);
// deleteatfront(head,tail);
// deleteatend(head,tail);
// cout<<endl;
// lengthofllrecursive(head);
// deleteatanyposi(head,tail,1);
cout << findkeyofaNode(head,18);
cout<<endl;
// printNode(head);
cout<<midpointofll(head,tail)<<endl;
cout<<midpointofll2(head,tail);
bubblesortll(head);
cout<<endl;
printNode(head);
}