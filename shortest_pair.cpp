#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


int main(){
        int arr[] = {11,99,23,4,89,90,1234,8796,5467,890};
        int min = arr[0];
        int size = sizeof(arr)/sizeof(arr[0]);

        for(int i =0  ; i<size; i++){
                for(int j=i+1; j<size; j++){
                                int temp = abs(arr[i] - arr[j]);
                                if ( temp < min)
                                {
                                        min = temp;
                                }
                }
        }

        for(int i = 0 ; i<size; i++){
                for(int j = i+1; j<size; j++){       
                                int temp = abs(arr[i] - arr[j]);
                                if(temp == min){
                                        cout<<"("<<std::min(arr[i],arr[j])<<", "<<std::max(arr[i],arr[j])<<") = "<<min;
                                }
                }
        }
}
