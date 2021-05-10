#include<iostream>
using namespace std;

class parent {
	public:
	parent(){
		cout<<"p got called \n";	
	}
};

class d1 : public parent{
	public:
	d1(){
		cout<<"d1 got called \n";
	}
};

class d2: public parent{
	public:
	d2(){
		cout<<"d2 got called \n";
	}
};

int main(){
	d2 a;
	d1 b;
	
}
