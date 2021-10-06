#include<iostream>
using namespace std;

class a{
public:
	int front;
	int rear;
	int capacity;
	int size;
	int *arr;
	
	a(int cap=1){
		front = rear=0;
		capacity=cap;
		arr=new int;
		size=0;
	}
	
	void push(int n){
		
		if(size==0){
			arr[front]=n;
			rear++;
			size++;
			return;
		}
		if(size==capacity-1){
			cout<<"full";
			return;
		}
		arr[rear]=n;
		rear+=1;
		size+=1;
	}
	void display(){
		int i=0;
		while(size>i){
			cout<<arr[i];
			i++;
		}
	}
};

main(){
	
a q(5);
q.push(7);
q.push(9);
q.display();
cout<<q.size;

}
