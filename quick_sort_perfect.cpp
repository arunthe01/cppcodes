#include<bits/stdc++.h>
using namespace std;

int partition_algo(int l ,  int h , int arr[]){
        int i,j,k;
        i = l;
        j = h;
        k = i-1;
        int pivot = arr[h];
        while(i<j){
                if(arr[i]<pivot)
                       swap(arr[++k],arr[i]);
           i++;
        }

        swap(arr[k+1],arr[h]);

        return k+1;

}



void quick_sort(int l, int h, int arr[]){
        if(l<h){

        int pi = partition_algo(l,h,arr);
        // cout<<pi;

        quick_sort(l,pi-1,arr);
        quick_sort(pi+1,h,arr);
        }
        
        
}



main(){
        int arr[]={889,789,675,800};
        quick_sort(0,3,arr);
        for(int i = 0; i <=3; i++){
                cout<<arr[i]<<" ";
        }

        
}
