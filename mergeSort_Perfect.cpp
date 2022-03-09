#include<bits/stdc++.h>
using namespace std;


void merge(int l, int m , int h , int arr[]){
        int l_size = m-l+1;
        int r_size = h-m;
        int arr_l[l_size];
        int arr_r[r_size];

        int l_c = l;
        
        for(int i = 0 ; i<l_size;i++){
                arr_l[i] = arr[l_c++];
        }

        int r_c = m+1;

        for (int i = 0; i < r_size; i++)
        {
                arr_r[i] = arr[r_c++];
        }

        l_c = 0;
        r_c = 0;
        int sort = l;

        while(l_c<l_size && r_c<r_size){

                if(arr_l[l_c]<arr_r[r_c]){
                        arr[sort++] = arr_l[l_c++];
                }
       
       

                if (arr_l[l_c] > arr_r[r_c])
                {
                        arr[sort++] = arr_r[r_c++];
                }
        }


        while(l_c<l_size){
                arr[sort++] = arr_l[l_c++];
        }

        while (r_c < r_size)
        {
                arr[sort++] = arr_r[r_c++];
        }
}



void mergesort(int l , int h , int arr[]){
        if(h<=l){
                return;
        }

        int m = l+(h-l)/2;

        mergesort(l,m,arr);
        mergesort(m+1,h,arr);
        merge(l,m,h,arr);

        

}


main(){

        int arr[]= {67,42,99,108,789};

        mergesort(0,4,arr);

        for(int i = 0 ; i < 5; i++){
                cout<<arr[i]<<"  ";
        }

}
