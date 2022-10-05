#include<iostream>
using namespace std;
class Queue{
int *arr;
int ts;
int cs;
int f;
int r;
public:
Queue(int size){
	arr=new int[size];
	ts=s;
	cs=0;
	f=0;
	// r=-1;
	r=size-1;
}
void push(int d){
	if(cs<ts){
	r=(r+1)%ts;
	arr[r]=d;
	cs++;
}
 else{
 	cout<<"overflow"<<endl;
 }
}
void pop(){
if(cs>0){
	f=(f+1)%ts;
	cs--;
}
else{
	cout<<"underflow";
}

}
//top() in queue it is called front

int front(){
	if(cs>0){
	return arr[f];
	}
	return -1;
}

//empty()
bool empty(){
	
	return cs==0;
}


//size()
int size(){
	return cs;
}




};

int main(){
	Queue a(5);
	a.push(1);
	a.push(5);
	a.push(5);
	a.push(7);
	a.push(4);

	
}
