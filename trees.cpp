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
Node* buildtree(){
int data;
cin>>data;
if(data==-1){
	return NULL;
}
else{
	Node* root=new Node(data);
	//left subtree
	root->left=buildtree();
	//right subtree
	root->right=buildtree();

return root;
}
void preorder(Node* root){
	if(root==NULL){
		return NULL;
	}
	cout<<root->data;
	preorder(root->left);
	preorder(root->right);
}
}
int countnodes(Node*root){

	if(root==NULL){
		return 0;
	}
    return countnodes(root->left)+countnodes(root->right)+1;
}
int heightoftree(Node*root){
	//base case
	if(root==NULL){
		return 0;
	}

	return max(heightoftree(root->left),heightoftree(root->right))+1;
}
int diameter(Node*root){
	//base case
	if(root==NULL){
		return 0;
	}
	//recursive case
	//op 1 is diameter lies iin lst
	int op1=diameter(root->left);
	//op2 is diameter lies in rst
	int op2=diameter(root->right);
	//op3 is diameter passing through root
	int op3=heightoftree(root->left)+heightoftree(root->right);

	return max(op1,(op2,op3));

}
void mirrorofatree(node*root){
	if(root==NULL){
		return;
	}

	swap(root->left,root->right);

	mirrorofatree(root->left);
	mirrorofatree(root->right);
}
void printlevelwise(node*root){
	queue<Node*>q;
	q.push(root);
	q.push(NULL);
while(!q.empty()){
	Node*x=q.front();//300
	q.pop();
	if(x==NULL){
		cout<<endl;
		if(!q.empty()){
			q.push(NULL);
		}

	}
	else(x!=NULL){
		//print x ka data
		cout<<x->data<<" ";
		//if left child is not NULL
		if(x->left!=NULL){
			q.push(x->left);
		}
		if(x->right!=NULL){
			q.push(x->right);
		}
	}
}

}
int main(){
    Node* root=buildtree();
    cout<<"count of nodes is: "<<countnodes(root);
    // preorder(root);
    cout<<"height of tree is: "<<heightoftree(root);
   cout<<"diameter of tree is: "<<diameter(root);

	return 0;
}