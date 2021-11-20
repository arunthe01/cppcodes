#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i){
	 int smallest=i;
	 int l = i*2+1;
	 int r = i*2+2;
	 
	 if(l<n && arr[smallest]>arr[l]){
	 	smallest=l;
	 }
	 
	 if(r<n && arr[smallest]>arr[r]){
	 	smallest=r;
	 }
	 
	 if(smallest != i){
	 	swap(arr[i],arr[smallest]);
	 	heapify(arr,n,smallest);
	 }
}

void deleteroot(int arr[], int& n){
	 arr[0]=arr[n-1];
	 n=n-1;
	 heapify(arr,n,0);
	 
}

void printnode(int arr[],int n){
	 for(int i =0 ; i<n ; i++){
	 	cout<<arr[i]<<"\t";
	 }
}

int main(){
	int arr[]= {2,5,10,15,12,11,17};
	
/*            2
	     /  \ 
	   5     10                   
	  / \   / \
        15  12 11  17  
*/
	int n=(sizeof(arr)/sizeof(arr[0]));
  	deleteroot(arr,n);
  	printnode(arr,n);
  

}
