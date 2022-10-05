

#include <iostream>
#include<cstring>
using namespace std;
void isPalindrome(char ch[]){
     int i=0;
     int n=strlen(ch);
     if(ch[i]==ch[n-i-1]){
         cout<<"Yes it is Palindrome";
     }
     else{
         cout<<"No";
     }
 }

int main()
{
//   char ch[20]="nitinm";
   char ch[20];
   cin.getline(ch,20);
   isPalindrome(ch);
    return 0;
}
