#include <iostream>
#include<cstring>
using namespace std;
void reverse(char a[]){
    int i=0;
    int n=strlen(a);
    int j=n-1;
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
}

int main()
{
    char ch[100];
    cin.getline(ch,100);
    reverse(ch);
    
    cout<<ch<<endl;
    reverse(ch);
    cout<<ch<<endl;
    
}
