


#include <iostream>

using namespace std;

bool is7presentornot(int arr[],int n,int key){
    if(n==0){
        
            return false;
        
    }
    
   if(arr[0]==key){
       return true;
   }
   return is7presentornot(arr+1,n-1,key);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    // cout<<is7presentornot(arr,n);
    if(is7presentornot(arr,n,key)==1){
        cout<<key << " is present. ";
    }
    else{
        cout<<key << " is not present.";
    }

    return 0;
}
