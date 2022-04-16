#include <iostream>
using namespace std;

bool cmp(int l , int h, string s){
        string p="";
        for(int i = h ; i>=l ; i-- ){
           p=p+s[i];
        }
        
        if(s == p){
            return true;
        }
        return false;
    }

int main() {
    string s;
    cin>>s;
    int len=0;
    int mlen=0;
    
    // cmp(0,2,"sas");
    
    
    for(int i =0  ; i<s.length(); i++){
        string str = "";
        len = 0;
        for(int j = i ; j<s.length(); j++){
            str = str+s[j];
            bool b = cmp(i,j,str);
            if(b)
                len = (j-i)+1;
            
        }
        
        if(len>mlen)
            mlen = len;
        
    }
    
    cout<<mlen;
    
}
