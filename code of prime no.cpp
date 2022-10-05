#include<iostream>
using namespace std;

int main(){

	//printing all prime numbers till N
	int N;
	cout<<"Enter the number"<<endl;
	cin>>N;
	int rows, columns;
	while(rows<=N){
		columns=1;
		  {
			
			while(columns<=rows){
				cout<<"*";
				columns=columns+1;
			}
			cout<<endl;

		}

		rows=rows+1;
	}


	}

     //   *
     //  * *
     // * * *
     