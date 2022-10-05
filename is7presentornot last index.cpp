/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int is7presentornot(int arr[],int n,int i,int key){
    if(i==n){
        
            return -1;
        
    }
    
   if(arr[i]==key){
       return i;
   }
   return is7presentornot(arr,n-1,i-1,key);
}

int main()
{
    // cout<<"Hello World";
    // int arr[]={0,4,0,5};
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
     cout<<is7presentornot(arr,n,n-1,key);
    // if(is7presentornot(arr,n,0,key)==1){
    //     cout<<key << " is present. ";
    // }
    // else{
    //     cout<<key << " is not present.";
    // }

    return 0;
}
