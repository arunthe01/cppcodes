#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
    return a>b;
}

bool cmp_des(int a, int b){
    return a<b;
}
void merge(int a, int m, int b, vector<int> &arr){
    int i,j,k;
    i = j = 0;
    k = a;

    vector<int> arr1(arr.begin()+a,arr.begin()+m+1);
    vector<int> arr2(arr.begin()+m+1,arr.begin()+b+1);

    while(i < arr1.size() && j < arr2.size()){
        if(!cmp(arr1[i] , arr2[j])){
            arr[k++] = arr1[i++];
        }else{
            arr[k++] = arr2[j++];
        }
    }

    while(i < arr1.size()){
        arr[k++] = arr1[i++];
    }

    while(j < arr2.size()){
        arr[k++] = arr2[j++];
    }
}

void mergesort(vector<int> &arr,int start,int end){
    if(start>=end){
        return;
    }
   int mid=start+(end-start)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(start,mid,end,arr);
    
}
void display(vector<int> &arr, int size) {
   for(auto ele :arr)
      cout << ele;
   cout << endl;
}
int main() {
vector<int> arr ={5,0,2};
mergesort(arr,0,2);
display(arr,3);

}
