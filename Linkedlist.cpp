#include<iostream>
using namespace std;
class Node{
public:
	int data;
	Node* next;

	Node(int d){
		d=data;
		next=NULL;
	}

};


int main(){
//int x;-->primitive datatype.

//user-defined datatypes/objects.
 Node n1(1);
 Node n2(2);
 n1.next=&n2;
 // cout<<n1.data<<" "<<n2.data<<endl;

 //I want to print n1 data and n2 data with the help of n1
  // cout<<n1.data<<" "<<(*n1.next).data<<endl;

 // n1.next---->>address
 
}