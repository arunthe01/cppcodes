#include<iostream>
using namespace std;

class heap{
 public:
	int *arr;
	int capacity;
	int size;
	heap(int cap){
		capacity=cap;
		arr=new int[cap];
		size=0;
	}
	
	
	void heapify(int i){
		int smallest=i;
		int lt = i*2+1;
		int rt = i*2+2;
		if(lt<size && arr[i]>arr[lt])
			smallest=lt;
		if(rt<size && arr[smallest]>arr[rt])
			smallest=rt;
		if(i != smallest){
			swap(arr[i],arr[smallest]);
			heapify(smallest);
		}
	}
	
	void buildheap(){
		for(int i=(size-2)/2; i>=0 ; i--){
			heapify(i);
		}
	}
	
	void insert(int val){
	    size+=1;
		arr[size-1]=val;
	}
	
	void printnode(){
		 for(int i =0 ; i<size; i++){
		 	cout<<arr[i]<<"\t";
		 }
   }
};

int main(){
	heap h(4);
	h.insert(8);
	h.insert(15);
	h.insert(24);
	h.insert(2);
	h.buildheap();
	h.printnode();
	
	
}
	
