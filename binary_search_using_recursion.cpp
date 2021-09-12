#include<iostream>
using namespace std;

int binary_search(int arr[], int start , int end ,int x){
	int mid=(start+end)/2;
	
	if(start>end){
		return -1;
	}
	
	else if(arr[mid] == x){
		return 1;
	}
	
	else {
		if(x>arr[mid]){
			start=mid+1;
			binary_search(arr,start,end,x);
		}
		else{
			end=mid-1;
			binary_search(arr,start,end,x);		
		}
	}
	
}

main(){
	
	int arr[]={1,2,3,4,5};
	int size=5;
	cout<<"\nenter the element you want to find :";
	int x;
	cin>>x;
	int sol =binary_search(arr,0,4,x);
	
	if(sol==1)
		cout<<x<<" is found\n";
	else
		cout<<x<<" not found";
	
 	
}
