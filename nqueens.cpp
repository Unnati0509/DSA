#include<iostream>
using namespace std;
int c=0;
bool kyamainqueendalsktihu(int board[50][50],int i, int j,int n){
   //vertical check
   // i 3 j 0
  for(int l=0;l<i;l++){
   if(board[l][j]==1){
      return false;
   }
  }
  //Horizontal check
  for(int m=0;m<j;m++){
   if(board[i][m]==1){
      return false;
  }
}
int u=i;
int v=j;
  //diagonal check
  //check on right diagonal...
// i--->2 , j-->2
while(i>=0 and j<n){
if(board[i][j]==1){
   return false;
}
i--;
j++;
}
//i =-1 and j =5
  //check on left diagonal...
  while(u>=0 and v>=0){
   if(board[u][v]==1){
      return false;
   }
   u--;
   v--;
}
return true;
}
void nqueen(int board[50][50],int n,int i){
 //base case
   if(i==n){
       c++;
      for(int a=0;a<n;a++){
         for(int b=0;b<n;b++){
            if(board[a][b]==1){
               cout<<"{"<<a+1<<","<<b+1<<"}";
            }
            // cout<<board[a][b]<<" ";
         }
         // cout<<endl;
      }
      return;
   }
 for(int j=0;j<n;j++){
 if(kyamainqueendalsktihu(board,i,j,n)==true){
    board[i][j]=1;
    bool kyabaakikaansmila = nqueen(board,n,i+1);
    if(kyabaakikaansmila==true){
      return true;
    }
    board[i][j]=0;
 }
}
return false;


}
int main()
{
   int board[50][50]={0};
   int n;
   cin>>n;
   nqueen(board,n,0);
   cout<<c;
   return 0;
}