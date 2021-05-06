#include<iostream>
#include<fstream>
#include<string>

using namespace std;

main(){
	
  
	fstream a;
	
	a.open("op-8",ios::out);
	

	a<<"happy annivessary babai and pinni god bless you and wish you all happiness";
	
	
	if(a){
		
		cout<<"error occured ";
	}
	a.close();
	
		
}
		
		



