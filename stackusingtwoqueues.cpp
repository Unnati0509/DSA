#include<iostream>
#include<queue>
using namespace std;
class stack{
 queue<int> q1;
 queue<int> q2;

//push
public:
 void push(int d){
   if(q1.empty() and q2.empty()){
   	//dono mei se ek kisi queue ko use krlo data 
   	// daalne ke liye
   	q1.push(d);
   }
   else if(!q1.empty() and q2.empty()){
   	q1.push(d);
   }
   else {
   	q2.push(d);
   }
 }

int top(){
 	else if(!q1.empty() and q2.empty()){
 		while(q1.size()>1){
 		q2.push(q1.front());
 		q1.pop();

 	}
 	int topele=q1.front();
 	q2.push(q1.front());
 	return topele;
 }
 else{
 	while(q2.size()>1){
 		q1.push(q2.front());
 		q2.pop();
 	}
 	int topele=q2.front();
 	q1.push(q2.front);
 	return topele;
 }

}

 //pop
void pop(){
 	if(q1.empty() and q2.empty()){
 		return;
 	}
 	else if(!q1.empty() and q2.empty()){
 		while(q1.size()>1){
 		q2.push(q1.front());
 		q1.pop();

 	}
 	q1.pop();
 }
 else{
 	while(q2.size()>1){
 		q1.push(q2.front());
 		q2.pop();
 	}
 	q2.pop();
 }

 }
int size(){
	if(q1.empty() and q2.empty()){
		return 0;
	}
	else if(!q1.empty() and q2.empty()){
		return q1.size();
	}

	else{
		return q2.size();
	}
}
bool empty(){
	return q1.size()==0 and q2.size()==0;
}


int main(){
	Stack s;
	s.push(9);
	s.push(7);
	s.push(8);
	s.push(5);
	s.push(10);
	while(!s.empty()){
	cout<<s.top()<<" ";
	s.pop();
}
}
