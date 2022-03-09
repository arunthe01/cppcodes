#include <iostream>
using namespace std;

int part( int arr[], int low , int high){
	
	int pivot=arr[high];
	int j= low-1;
	
	for(int i = low ; i<=high-1; i++){           // partition of array 
	                     						// >PIVOT|| PIVOT || <PIVOT  ELE
		if(arr[i]<pivot){
			j++;
			swap(arr[j],arr[i]);
		}
	}
	swap(arr[j+1],arr[high]);
	return j+1;
	
}


void quicksort(int arr[], int low , int high){
    if(low == high){
    int pi=part(arr,low,high);
    quicksort(arr,low,pi-1);
    quicksort(arr,pi+1,high);
    }
}

int main() {
    int arr[]={9,2,8,6,9};
	quicksort(arr,0,4);
	for(int j =0 ; j<5 ; j++)
	    cout<<arr[j];
}
