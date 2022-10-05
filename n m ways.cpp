#include <iostream>
int noofways(int n,int m){
    //base case
    if(n==0){
        return 1;
    }
    if(m==0){
        return 1;
    }
    
    return noofways(n-1,m)+noofways(n,m-1);
}

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<noofways(n,m);
    return 0;
}
