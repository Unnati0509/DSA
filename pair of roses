#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	int j=1;
	while(j<=T){

     int n;
	 cin>>n;
	 int prices[n];
	 for(int i=0;i<n;i++){
		 cin>>prices[i];
	 }
	int m;
	cin>>m;

	sort(prices,prices+n);
    int k=0;
    int l=n-1;
    int diff=INT_MAX;
            while(l>k){
            int current_sum=prices[k]+prices[l];
           
            
            if(current_sum<m){
                k++;
            }
            else if(current_sum==m){
                // diff=findMinDiff(prices,n);
              if( diff>abs(prices[k]-prices[l])){
                diff=abs(prices[k]-prices[l]);
                
               }
             else{
                 k++;
                 l--;
             }
             k++;
			 l--;
            }

            else if(current_sum>m){
                l--;
            }
            
            }
           cout << "Deepak should buy roses whose prices are " << prices[k] << " and " << prices[l] <<'.' ;
cout<<endl ;
		j++;
	}
	return 0;
}