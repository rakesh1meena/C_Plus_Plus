//class_3 [ different type of allocation of class object ]
#include<iostream>

using namespace std;

class HumanBeing
	{
	public:
	string name;
	void introduce()
	  {
	  cout<<"hello I am : "<<name<<endl;;
	  }
	};

int main()
	{
	cout<<"rakesh1meena[16-12-2018]\n";
	//static allocation -> storage stack is uses. allocation happens on declaration and deallocation happens when the variable's scope is over.
	HumanBeing anil;
	anil.name="Anil";
	anil.introduce();
	
	//dynamic allocatoion -> storage heap is uese. allocate and deallocate as needed.
	HumanBeing *bunty= new HumanBeing();
	bunty->name="Bunty";
	bunty->introduce();
	delete bunty;
	
	return 0;
	}
