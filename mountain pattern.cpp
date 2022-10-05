

#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int rows=1;
    int star=1;

    
    while(rows<=N){
        int space=N-rows;
        int j=1;
        int i=1;
        while(j<=space){
            cout<<" ";
            j++;
        }
        while(i<=star){
        cout<<"* ";
        i++;
        }
        
        cout<<'\n';
        rows++;
        star++;
    }
    
}


     //   *
     //  * *
     // * * *
     
