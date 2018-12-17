//class_2 [ creating more then one static object ] 
#include<iostream>

using namespace std;

class HumanBeing
	{
	 public:
	  string name;
	 void introduce()
	 {
	  cout<< "hello  I am "<<name<<"\n";
	  }  
	};
	

int main()
	{
	cout<<"rakesh1meena[16-12-2018]\n";
    
	HumanBeing anil;
	anil.name="anil";
	anil.introduce();
	
	HumanBeing anjali;
	anjali.name= "Anjali";
	anjali.introduce();
	return 0;
	}
