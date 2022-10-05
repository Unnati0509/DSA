#include<iostream>
#include<list>
using namespace std;

int main(){
list<int> l;

l.push_back(5);
l.push_back(15);
l.push_back(50);
l.push_back(75);
l.push_back(98);
//5 15 50 75 98
// for(int i=0;i<l.size();i++){
// cout<<l.front()<<endl;
// 
// }
cout<<l.back()<<endl;
cout<<l.size()<<endl;

list<int>:: iterator it=l.begin();

// l.insert(it,2);
l.insert(it,77);

cout<<l.front()<<endl;//acts as pushfront
l.insert(it+3,100);
for(it=l.begin();it!=l.end();it++){
    cout<<*it<<" ";
}
cout<<endl;
return 0;
}