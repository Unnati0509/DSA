#include<iostream>
using namespace std;

class Node{
public:
  int data;
  Node* left;
  Node* right;
  Node(int data){
  	this->data=data;
  	left=NULL;
  	right=NULL;
  }
};
Node* insertinBST(Node*root,int data){
	if(root==NULL){
		root=new Node(data);
		return root;
	}
	else if(data<=root->data){
		root->left=insertinBST(root->left);
		return root;
	}
	else{
		root->right=insertinBST(root->right);
		return root;
	}
}

Node* buildBST(){
	int data;
	Node*root=NULL;
	cin>>data;
	while(data!=-1){
	root=insertinBST(root,data);
	}
	return root;
}
void rightview(Node*root,int cl,int &mxlevel){

	//base case
	if(root==NULL){
		return;
	}
	//recursive case
	if(cl>mxlevel){
	cout<<root->data<<" ";
	mxlevel++;
}
	rightview(root->right,cl+1,mxlevel);
	rightview(root->left,cl+1,mxlevel);
}
int main(){

int k=0;
rightview(root,1,k);

}