#include <iostream>

using namespace std;

void spiralprint(int arr[4][4],int trows, int tcols){
    int sr=0;
    int sc=0;
    int ec=tcols-1;   //endingcol
    int er=trows-1; //endingrow
    //ist row printing
    while(sc<=ec && sr<=er){
    for(int j=sc;j<=ec;j++){
    cout<<arr[sr][j]<<" ";
    // break;
    }
    sr++;
    //second row printing
    for(int i=sr;i<=er;i++){
        cout<<arr[i][ec]<<" ";
        // break;
    }
    ec--;
    //third row printing
    if(sr<=er){
    for(int k=ec;k>=sc;k--){
        cout<<arr[er][k]<<" ";
        // break;
    }
    er--;
    }
    //fourth row printing
    if(sc<=ec){
    for(int l=er;l>=sr;l--){
        cout<<arr[l][sc]<<" ";
        // break;
    }
    
    sc++;
    }
    // //fifth row printing
    // for(int m=sc;m<=ec;m++){
    //     cout<<arr[sr][m]<<" ";
    //     // break;
    // }
    // sr++;
    // //sixth row printing
    // for(int t=ec;t>=sc;t--){
    //     cout<<arr[sr][t]<<" ";
    //     // break;
    // }
    
    }
}
int main()
{
 // int arr[4][4]={
 //     {4,3,1,6},
 //     {9,17,30,14},
 //     {3,9,60,49},
 //     {33,49,63,79}
     
 // };
    int arr[100][100];
    int rows,cols;
    cin>>rows>>cols;

for(int i=0;i<rows;i++){
    for (int j = 0; j < cols; j++)
    {
        cin>>arr[i][j];
    }
 
}
 spiralprint(arr,rows,cols);
}
