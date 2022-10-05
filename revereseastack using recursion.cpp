#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &s,int te){
	//base case
	if(s.empty()){
		s.push(te);
		return;
	}


	//recursive case
	int y=s.top();
	s.pop();
	insertatbottom(s,te);
	s.push(y);

}
void reversestack(stack<int> &s){
	//base case
	if(s.empty()){
		return;
	}
    
	//recursive case
	int topelement=s.top();
	s.pop();
	reversestack(s);
	insertatbottom(s,top);
}
void printstack(stack<int> s){
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
cout<<endl;
}
int  main(){
  stack<int> s;
  s.push(2);
  s.push(3);
  s.push(6);
  s.push(7);
  s.push(0);

  printstack(s); 
  reversestack(s);
   printstack(s); 
}