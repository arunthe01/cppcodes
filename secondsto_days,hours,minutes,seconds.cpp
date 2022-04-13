#include<iostream>
#include<string>
using namespace std;

string string_conv(int a,string s){
    if(a == 0)
        return "";
    return to_string(a)+s+" ";
}

int main(){
        float sec;
        cin>>sec;
        float thours = ((sec/60.0)/60.0);
        int hours = thours;
        float rh = thours - hours;
        int days = hours/24;
        float extrh = (hours%24);
        float sum_hrs = rh+extrh;
        int fhours = sum_hrs;
        float ehours = sum_hrs-fhours;
        float mins = ehours*60;
        int fmin = ehours*60;
        float emin = mins-fmin;
        int fsec = emin*60;
        
        string s1 = string_conv(days,"Days");
        string s2 = string_conv(fhours,"Hours");
        string s3 = string_conv(fmin,"Minutes");
        string s4 = string_conv(fsec,"Seconds");
        
        
        cout<<s1<<s2<<s3<<s4;
}
