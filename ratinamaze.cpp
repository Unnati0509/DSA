#include<iostream>
using namespace std;
int sol[50][50]={0};
bool ratinamaze(char maze[][100], int r,int c,int i, int j){
	// basecase
	if(i==r-1 and j==c-1){
		sol[i][j]=1;
		for(int a=0;a<r;a++){
			for(int b=0;b<c;b++){
				cout<<sol[a][b]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		sol[i][j]=0;
		return false;
	}
	// recursive case
	sol[i][j]=1;
	//forward
	if(j<=c-2 and maze[i][j+1] != 'X'){
		bool kyaageseansmila=ratinamaze(maze,r,c,i,j+1);
		if(kyaageseansmila==true){
			return true;
		}
	}
	//downward
	if(i<=r and maze[i+1][j] !='X'){
		//toh main neeche jaa skti hu
		bool kyaneecheseansmila = ratinamaze(maze,r,c,i+1,j);
		if(kyaneecheseansmila==true){
			return true;
		}
	}
	sol[i][j]=0;
	return false;
}
int main()
{
	char maze[][100]={
		"0000",
		"0X00",
		"00XX",
		"0000"
	};
	int r=4;
	int c=4;
	
	cout<<ratinamaze(maze,r,c,0,0);

	return 0;
}