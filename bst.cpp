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
void buildtreelevelwise(){
	int data;
	// cout<<"Enter the data of root node: ";
	cin>>data;
	if(data==-1){
		return;
	}
	else{
	 Node* root=new Node(data);
	 queue<Node*>q;
	 q.push(root);

	 Node*x=q.front();
	 x.pop();

	 // cout<<"Enter the left and right child of: "<<x->data<<endl;
	 int lc,rc;
	 cin>>lc>>rc;
	 if(lc!=-1){
	 	x->left=new Node(lc);
	 	q.push(x->left);
	 }
	 if(rc!=-1){
	 	x->right=new Node(rc);
	 	q.push(x->right);
	 }



return root;
	}

}
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
bool searchinBST(Node* root,int key){
	if(root==NULL){
		return false;
	}
	if(root->data==key){
		return true;
	}
	else if(root->data>key){
		return searchinBST(root->left,key);
	}
	else{
		return searchinBST(root->right,key);
	}

}
void rangebwk1andk2(Node*root,int k1,int k2){
if(root==NULL){
	return;
}

	rangebwk1andk2(root->left,k1,k2);
	if(root->data>=k1 and root->data<=k2){
		cout<<root->data<<" ";
	}
	rangebwk1andk2(root->right,k1,k2);
}
class linkedll{
public:
	Node*head;
	Node*tail;
	linkedll(){
		head=NULL;
		tail=NULL;
	}
};
linkedll bsttoll(Node*root){
linkedll l;
	//base case
if(root==NULL){
	return l;
}
	//case1 no lst and rst
	if(root->left==NULL and root->right==NULL)
{
	l.head=root;
	l.tail=root;

}
//case2 lst exists only
else if(root->left!=NULL and root->right==NULL){
	linkedll le=bsttoll(root->left);
	le.tail->right=root;
	l.head=le.head;
	l.tail=root;
	
}
//case 3 rst exists only
else if(root->right!=NULL and root->left==NULL){
	linkedll re=bsttoll(root->right);
	// re.tail->right=root;
	// l.head=re.head;
	// l.tail=root;
	root->right=re.head;
	l.head=root;
	l.tail=re.tail;
	
}
//case 4 both lst and rst exists
else{
linkedll le=bsttoll(root->left);
linkedll re=bsttoll(root->right);
le.tail->right=root;
root->right=re.head;
l.head=le.head;
l.tail=re.tail;

}
	return l;
}
isbstornot(Node*root, int min=INT_MIN, int max=INT_MAX){
	//base case
	if(root==NULL){
		return true;
	}

	//recursive case
	if((root->data>=min and root->data<=max)and isbstornot(root->left,min,root->data) and isbstornot(root->right,root->data+1,max)){
		return true;
	}
	return false;
}
class Pair{
public:

	int hei;
	bool isbal;
	Pair(){
		hei=0;
		isbal=true;
	}
};
Pair isheightbalancedornot(Node*root){
	Pair p;
	//base case.
	if(root==NULL){
		return p;
	}

	//recursive case.
	Pair lst=isheightbalancedornot(root->left);
	Pair rst=isheightbalancedornot(root->right);
	p.hei=max(lst.hei,rst.hei)+1;
	if(lst.isbal==true and rst.isbal==true and abs(lst.hei-rst.hei)<=1){
		p.isbal=true;
	}

	p.isbal=false;
	return p;
}
Node* buildbstusingsortedarr(int s,int e){

//base case
	if(s>e){
		return NULL;
	}

//rec case


	int mid=(s+e)/2;
	Node*root=new Node(arr[mid]);
	root->left=buildbstusingsortedarr(s,mid-1);
	root->right=buildbstusingsortedarr(mid+1,e);

	return root;
}
Node* deleteinBst(Node*root,int key){
	//case 1 in lst
	if(key<root->data){
		root->left=deleteinBst(root->left,key);
		return root;
	}
	//case 2 key in rst
	else if(key>root->data){
		root->right=deleteinBst(root->right,key);
		return root;
	}
	//delete root
	else{
		//lst and rst not present
		if(root->left==NULL and root->right==NULL){
			delete root;
			return NULL;
		}
		//only lst is present
		else if(root->left!=NULL and root->right==NULL){
			Node*temp=root->left;
			delete root;
			return temp;
		}

   //only rst is present
		else if(root->left==NULL and root->right!=NULL){
			Node*temp=root->right;
			delete root;
			return temp;
		}
		//both lst and rst are present

		else{
			//I am replacing max of left
			Node*replace=root->right;
			while(replace->right!=NULL){
			replace=replace->right;
		}
		swap(root->data,replace->data);
		root->left=deleteinBst(root->left,key);
		return root;

		}
		// or i AM REPLACING MIN of lst

		// 	Node*replace=root->left;
		// 	while(replace->left!=NULL){
		// 	replace=replace->left;
		// }
		// swap(root->data,replace->data);
		// root->right=deleteinBst(root->right,key);
		// return root;

	}
} 