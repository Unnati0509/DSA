#include<iostream>
#include<vector>
using namespace std;
template<typename T>

class stack{
		vector<T> v;
public:

//push
	void push(T data){
		v.push_back(data);
	}
//pop
    void pop(){
    	v.pop_back();
    }

//top
    T top(){
    	return v[v.size()-1];
    }


//size
    T size(){
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
	stack<char> s;
	s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');
	s.push('E');
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