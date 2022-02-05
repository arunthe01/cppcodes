#include<iostream>
using namespace std;

int main(){
        cout<<"Enter the text : ";
        string txt, pat;
        cin>>txt;
        cout << "Enter the pattern : ";
        cin>>pat;
        int max = (txt.length()-pat.length());
        int j;
        for(int i = 0 ; i<=max ; i++){
                j =0;                                                  // here the for loop movies till text.length() - pat.length() +1 ; times
                while(pat[j]==txt[i+j]){
                        j++;                                          /*so moving from (0 to n) 1 to n = n , 0 =1 , in total = t-p+1 times (as discussed above)*/
                        if(j==pat.length()){
                                cout<<"found at "<< i;
                                return 0;
                        } 
                }
        }
        cout<<"not found";
                
}


