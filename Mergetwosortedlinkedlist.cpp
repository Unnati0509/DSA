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

Node* mergetwolinkedlist(Node*head1, Node* head2){
	//base case
	//case1->linked list two is empty.
	if(head2==NULL){
		return head1;
	}
	else if(head1==NULL){
		return head2;
	}

	//recursive case
	else{
		Node *newHead=NULL;
		if(head1->data<head2->data){
		newHead=head1;
		newHead->next=mergetwolinkedlist(head1->next,head2);
	}
	   else{
	   	newHead=head2;
	   	newHead->next=mergetwolinkedlist(head1,head2->next);
	   }
	   return newHead;
}

}



int main(){
Node* head1=NULL;
Node* tail1=NULL;
Node* head2=NULL;
Node* tail2=NULL;
insertatfront(head1,tail1,16);
insertatfront(head1,tail1,9);
insertatfront(head1,tail1,4);
insertatfront(head1,tail1,1);
insertatfront(head2,tail2,8)
insertatfront(head2,tail2,3);
insertatfront(head2,tail2,2);
printNode(head);
Node *newH=mergetwolinkedlist(head1,head2);

printNode(newH);
cout<<endl;

}