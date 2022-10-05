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



int lengthofllrecursive(Node *head){

	//base case
	if(head->next==NULL){
		return 0;
	}

	//recursive case
	return 1+lengthofllrecursive(head->next);
}





// Node* midpointofll2(Node *head,Node *tail){
// 	Node*slow=head;//Even ke case mei first midpoint wala deta h

// 	Node*fast=head->next;
// 	while(fast!=NULL and fast->next!=NULL){
// 	//For odd length
// 	slow=slow->next;
// 	fast=fast->next->next;
// }

// return slow->data;
// }
bool cyclepresentornot(Node *head){
Node* slow=head;
Node* fast=head;
Node*prev=slow;
while(fast!=NULL and fast->next!=NULL){
slow=slow->next;
fast=fast->next->next;
if(slow==fast){
	return true;
}
}
return false;
}
void createacycle(Node* head,Node*tail){
	tail->next=head->next->next;
}

int main(){
Node* head=NULL;
Node* tail=NULL;
int n;
cin>>n;
for(int i=0;i<n;i++){
	cin>>data;
	insertattail(head,tail,data);
}
createacycle(head,tail);
if(cyclepresentornot(head)==true){
	cout<<"Cycle is present";
}
else{
	cout<<"Cycle is not present";
}