#include<iostream >
using namespace std;

class april{

public:

int a;

int b;

int c;

april(int a , int b){
	this->a=a;
	this->b=b;
}

 int operator ++(){
 	
  int nam;
  
  nam = 10 +  11;
 
  cout<<nam;
 }
 
};

int operator --(april w){
 	
  w.c= w.b+w.a;
  
  cout<<w.c<<endl;
 }

main(){
	
	april v(1,2);
	
	april w(7,4);
	
	--w;
	
	int quiz;
	
	int in;
	
	 ++in;

	

}
