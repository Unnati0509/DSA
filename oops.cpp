#include<bits/stdc++.h>
using namespace std;
//Blueprint of car object..
class car{
public:
	char name[100];
	int seats;
	int modelno;
	int price;
	car(){

		cout<<"Constructor called";
	}
	//Parameterized constructor
	car(char *n,int s,int m,int p){
		strcpy(name,n);
		seats=s;
		modelno=m;
		price=p;
	}
};

int main(){
	car a;
cout<<endl;
// 	a.name="BMW";
strcpy(a.name,"BMW");
	a.seats=4;
	a.modelno=2020;
	a.price=50000;


	cout<<a.name<<endl;
	cout<<a.seats<<endl;
	cout<<a.modelno<<endl;
	cout<<a.price<<endl;
	car b;

cout<<endl;
strcpy(b.name,"Audi");
	b.seats=4;
	b.modelno=2020;
	b.price=50000;


	cout<<b.name<<endl;
	cout<<b.seats<<endl;
	cout<<b.modelno<<endl;
	cout<<b.price<<endl;

car c("dustur",8,2020,50000);




	cout<<c.name<<endl;
	cout<<c.seats<<endl;
	cout<<c.modelno<<endl;
	cout<<c.price<<endl;

	return 0;
}