#include<iostream>
#include<stack>
using namespace std;
bool isbalanced(char *arr){
 	stack<char> s;
 	for(int i=0;arr[i]!='\0';i++){
 	char ch=arr[i];
 	switch(ch){
 		case '(': 
 		case '{':
 		case '[': s.push(ch);
 		break;
 		case ')':if(s.empty() and s.top()=='('){
 			s.pop();
 		}
 		else{
 			return false;
 		}
 		break;
 		case '}':if(s.empty() and s.top()=='{'){
 			s.pop();
 		}
 		else{
 			return false;
 		}
 		break;
 		case ']':if(s.empty() and s.top()=='['){
 			s.pop();
 		}
 		else{
 			return false;
 		}
 		break;

 	}
 }
 if(!s.empty()){
 	return false;
 }
 return true;

}

int  main(){
  
  char arr[]="[{(a+b)+c)}+d]";
  if(isbalanced(arr)){
  	cout<<"Balanced";
  }
  else{
  	cout<<"Not Balanced";
  }


}