#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i){
	 int parent=(i-1)/2;
	 if(parent>=0){
		 if(arr[parent]<arr[i]){
		 	swap(arr[i],arr[parent]);
		 	heapify(arr,n,parent);	
		 }
    } 
}

void insertin(int arr[], int& n , int key){
	 n=n+1;
	 arr[n-1]=key;
	 heapify(arr,n,n-1);
}

void printnode(int arr[],int n){
	 for(int i =0 ; i<n ; i++){
	 	cout<<arr[i]<<"\t";
	 }
}


int main(){
	int arr[100] = {5,4,3,1,2};
  int n=5;
  int key=8;
	insertin(arr,n,key);
	printnode(arr,n);
}
