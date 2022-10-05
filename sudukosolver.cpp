
#include <bits/stdc++.h>

using namespace std;
bool kyanumdaalskteh(int mat[9][9],int num,int i,int j,int n){
    //row mei wo num toh nhi H
    for(int k=0;k<n;k++){
        if(mat[i][k]==num){
            return false;
        }
    }
    for(int l=0;l<n;l++){
        if(mat[l][j]==num){
            return false;
        }
    }
    //root n cross root n mat mei check if the no is there or not?
    // startindexi= (i/root n)*root n
    // startindexj= (j/root n)*root n
    int p=sqrt(n);
    start_i= (i/p)*p;
    start_j= (j/p)*p;
    for(int a =start_i;a<start_i+p;a++){
    for(int b=start_j;b<start_j+p;b++){
        if(mat[a][b]==num){
            return false;
        }
    }
    }
    return true;
    
}
bool sudukosolver(int mat[9][9], int i , int j, int n){
    if(i==n){
        for(int k=0;k<n;k++){
            for(int l=0;l<n;l++){
                cout<<mat[k][l]<<" ";
            }
          cout<<endl;  
        }
        cout<<endl;
        return false;
    }
    if(j==n){
        return sudukosolver(mat,i+1,0,n);
    }
    
    
    if(mat[i][j]!=0){
        return sudukosolver(mat,i,j+1,n);
    }
    for(int num=1;num<=9;num++){
        mat[i][j]=num;
        bool kyanumdaalskteh=sudukosolver(mat,i,j+1,n);
        if(kyanumdaalskteh)==true){
           return true;
        }
        mat[i][j]=0;
    }

    return false;
}

int main()
{
    // cout<<"Hello World";

    return 0;
}
