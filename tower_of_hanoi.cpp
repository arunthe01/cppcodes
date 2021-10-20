#include<iostream>
using namespace std;

void toh(int n,string s,string a,string e){
    if(n==1){
        cout<<s <<" to "<< e<<"\n";
        return;
    }
    toh(n-1,s,e,a);
    cout<<s <<" to " <<e<<"\n";
    toh(n-1,a,s,e);
}

main(){
   cout<<"enter no.of disks :";
   int n;
   cin>>n;
   cout<<"\n";
    toh(n,"start","aux","end");
}
