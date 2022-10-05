#include<iostream>
#include<vector>
using namespace std;

class stack{
		vector<int> v;
public:

//push
	void push(int data){
		v.push_back(data);
	}
//pop
    void pop(){
    	v.pop_back();
    }

//top
    int top(){
    	return v[v.size()-1];
    }


//size
    int size(){
    	return v.size();
    }
//isempty
    bool isEmpty(){
    	// if(v.size()==0){
    	// 	return true;
    	// }
    	// else{
    	// 	return false;
    	// }
    	return v.size()==0;
    }



};
int main(){
	stack s;
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(1);
	s.pop();
	cout<<s.size()<<endl;
	
	cout<<s.isEmpty()<<endl;
	// cout<<s.v[1]<<endl;
	while(s.isEmpty()){
	cout<<s.top()<<" ";
	s.pop();
}
cout<<endl;
	return 0;


}