
#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int n,int target)
{   

	int start=0;
	int end=n-1;
	int mid=0;
	while(start<=end){
	    int mid=(start+end)/2;
	    if(arr[mid]==target){
	        return mid;
	    }
	    else if(arr[mid]>target){
	        end=mid-1;
	    }
	    else{
	        start=mid+1;
	    }
	}
	return -1;

}
void printArray(int arr[],int N){
for(int i=0;i<N;i++){
	cout<<arr[i]<<endl;
	}
}

// Driver code
int main()
{
	
	 int N;
	cin>>N;
	int arr[N];
	for( int i=0;i<N;i++){
		cin>>arr[i];
	}
	sort(arr,arr+N);
	int target;
	cin>>target;
// 	bubbleSort(arr, N);
cout<< binarysearch(arr,N,target);
	
// 	 printArray(arr, N);
	return 0;
}

