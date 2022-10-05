#include<iostream>
using namespace std;
int nstarircase(int n,int k){
   //base case
   // if(n==2){
   // 	return 2;
   // }
	//base case
   if(n==0){
   	return 1;
   }
   if(n<0){
   	return 0;
   }
   //recursive case
// return nstarircase(n-1)+nstarircase(n-2)+nstarircase(n-3);
   int sum=0;
  for(int i=1;i<=k;i++){
   	sum=sum+nstarircase(n-i,k);
   }
   return sum;
}
int main()
{
	//if K=3
	int n;
	cin>>n;
	int k;
	cin>>k;
	nstarircase(n,k)<<endl;
	return 0;
}