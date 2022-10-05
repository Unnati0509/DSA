#include<iostream>
#include<vector>
using namespace std;
class minheap{

	vector<int> v;
public:
	minheap(){
		v.push_back(-1);
	}
//insertion
void insert(int data){
		v.push_back(data);
		int child=v.size()-1;
		int parent=child/2;

		while(child>1 and v[child]<v[parent]){
			swap(v[child],v[parent]);
			child=parent;
			parent=child/2;
		}
	}
//heapify function:
void heapify(int index){
		int min_index=index;
		int lc=2*index;
		int rc=(2*index)+1;
		// if(lc>=v.size() || rc>=v.size()+1){
		// 	return;
		// }
		if(lc<v.size() and v[min_index]>v[lc]){
			min_index=lc;
		}
		if(rc<v.size() and v[min_index]>v[rc]){
			min_index=rc;
		}
		if(min_index!=index){
		swap(v[min_index],v[index]);
		heapify(min_index);
	}
	}

//deletion
void deleteinheap(){
	swap(v[1],v[v.size()-1]);
	v.pop_back();
	heapify(1);
}


//search(find min ele)
int searchele(){
	return v[1];
}


};


int main()
{
	/* code */
	minheap h;
	h.insert(2);
	h.insert(1);
	h.insert(3);
	h.insert(17);
	h.insert(19);
	h.insert(36);
	h.insert(7);
	h.insert(25);
	h.insert(100);
	// h.insert(0);

	return 0;
}