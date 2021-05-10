#include<iostream>
using namespace std;

class parent{
	public:
		parent(){
			cout<<"parent is called";
		}
};

class base{
	public:
		base(){
			cout<<"base is called";
		}
};

class derived : public parent,base{
	public:
		derived(){
			cout<<"derived is called";
		}
};

int main(){
	
	derived a;
	
	
	return 0;
}
