#include<iostream>
using namespace std;
main(){
	int arr[]={3,4,8,1,2};
	int size= sizeof(arr)/sizeof(arr[0]);
	for(int i = 1 ; i<size ; i++){
		int key = arr[i];
		int j = i-1;	
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j-=1;
		}
		arr[j+1]=key;
	}
	for(int i =0 ; i<size ; i++)
		cout<<arr[i];
}
