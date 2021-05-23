#include<iostream>
using namespace std;

class b_t_c{
public:
	string arun ;
	b_t_c(string k):arun(k){	
	}
};

class wish{
	public:
	string miss;

wish(string L):miss(L){ }
	
	operator b_t_c(){
	
	b_t_c q("0");
	q.arun = "mc";
	
	return q;
		
	}
};
int main(){
	
	string ruby="23";
	b_t_c a = ruby;
	string hep = "40";
	wish nep= hep ;
    a = (b_t_c) nep;	
    cout<<a.arun;
	return 0;
}
