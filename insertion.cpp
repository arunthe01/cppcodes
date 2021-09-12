#include <iostream>
using namespace std;

 main() {
int arr[5]={1,2,3,4} , size= sizeof(arr)/sizeof(arr[0]);
cout<<"\norginal array :";
    for(int i =0 ; i<4 ; i++)
    cout<<arr[i]<<"\t";

cout<<"\npress '1' to check vacancy in array :";
int z,h;
cin>>z;
if(z==1){
    if(size < 5){
        cout<<"vacancy not found";
    }
        else{
		
            cout<<"vacancy found";
            h=1;
            
        }
}

if(z==1 && h==1  ){
    cout<<"\nenter in which position you are going to enter an element out of 5:";
    int pos;
    cin>>pos;
     if(pos<=size && pos>=0){
	 
    cout<<"\nenter the element you want to enter :";
    int x;
    cin>>x;
    int ind = pos-1;
    while(size>ind){
        arr[size-1]=arr[size-2];
        size-=1;
    }
 arr[ind]=x;
cout<<"\nnew array :";
for(int i=0 ; i<5 ; i++)
cout<<arr[i]<<"\t";
		}
		else 
		cout<<"position is invalid";
	
	}	

}
