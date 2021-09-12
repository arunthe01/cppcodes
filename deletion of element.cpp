#include<iostream>
using namespace std;

main(){
	int arr[]={1,2,3,4,5} , del=0 , h=0 , size=5;
	cout<<"normal array :";
	for(int i =0 ; i<size ; i++)
		cout<<arr[i]<<"\t";
	cout<<"\nenter the element you want to delete :";
	int x;
	cin>>x;
	
	for(int i = 0 ; i<size ; i++){
	
		if(arr[i] == x){
			del=i;
			h=1;
			break;
		}
}

	if(h==1){
		if(del==size-1){
			size-=1;
		}
		else{
		
		while(del<size){
			arr[del]=arr[del+1];
			del++;
		}
		size-=1;
	
    	}
    	cout<<"\nnew array is :";
		for(int i =0 ; i<size ; i++)
			cout<<arr[i]<<"\t";
	}
	
	else{
		cout<<"not found";
	}
	
			
		
}
