/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int mul(int a,int b){
    if(b==0){
        return 0;
        
        
    } 
    
    return a+mul(a,b-1);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<< mul(a,b);

    return 0;
}
