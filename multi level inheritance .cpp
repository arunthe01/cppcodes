#include<iostream>
using namespace std;

class parent{
	public:
		parent(){
			cout<<"parent is called"<<endl;
		}
};

class d1 : public parent {
	public:
	    d1(){
			cout<<"d1 is called"<<endl;
		}
};

class d2 : public d1{
	public:
		d2(){
			cout<<"d2 is called"<<endl;
		}
};

int main(){
	
       d2 a;
	
	
	return 0;
}
