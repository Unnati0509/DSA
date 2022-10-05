#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;//12345
	int count =0;
	while(n>0){
		count++;
		n=n/10;
	}
	int digits= count;
	if(digits%2==0){
		int evensum, oddsum=0;
		int odd_digit=n/10;
		while(n>0 && odd_digit>=0){
			n=n%10;
			odd_digit=odd_digit%10;
			evensum=evensum+n;
			oddsum=oddsum+odd_digit;
			n=n/100;
			odd_digit=odd_digit/100;//0
		}
		cout<<evensum+n<<endl;
		cout<<oddsum<<endl;

		
			}

		if(digits%2!=0){
			int evensum, oddsum=0;
			int even_digit=n/10; //12345/10=1234
			while(n>0 && even_digit>=0){
			n=n%10; //5, 3
			even_digit=even_digit%10; //4, 2
			evensum=evensum+even_digit; //4+2=6,
			oddsum=oddsum+n; //5+3=8,
			n=n/100; //123//1
			even_digit=even_digit/100; //12//0

			}
			cout<<evensum<<endl;
			cout<<oddsum+n<<endl;
		}
	return 0;
}