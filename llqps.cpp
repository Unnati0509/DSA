#include<iostream>
using namespace std;

class Node{
public:
int data;
Node *next;

Node(int data){
	this->data=data;
	next=NULL;
}
};
Node* buildlinkedlist(Node *&head){
Node *temp=head;
int data;
while(data!=-1){
cin>>data;

if(temp==NULL){
         temp=new Node(data);
         temp->next=NULL;
         head=temp;
}
else{
          temp->next=new Node(data);
          temp=temp->next;
}
   }
temp->next=NULL;
return head;
}
Node* reverse(Node *&head){
    if(head->data!=-1 and head->next==NULL){
        return head;
    }
    Node *HEAD=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return HEAD;
}

void printlinkedlist(Node* &head){
	Node* temp=head;
	while(temp->next!=NULL){
	cout<<temp->data<<" ";
	temp=temp->next;
	}
}
int lengthofll(Node *head){

	//base case
	if(head->next==NULL){
		return 0;
	}

	//recursive case
	return 1+lengthofll(head->next);
}
int findkey(Node*head,int key){
    int index=1;
    int k=lengthofll(head);
    while(head!=NULL){
    if(head->data==key){
        return index;
    }
    else{
       head=head->next;
       index++;
    }
}
return (k-index)+1;
}

int main() {
	Node *head=NULL;
	Node* newNode=buildlinkedlist(head);
    int key;
      cin>>key;
 cout<<findkey(newNode,key);
	return 0;
}
