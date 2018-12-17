//class_10 [allocating memory dynamically and deallocation then after ]

#include<iostream>
using namespace std;

class BeingHuman
	{
	private:
	int *age;
	string *name;
	
	public:
	BeingHuman(int iage, string iname)
		{
		age = new int;
		name = new string;
		//dynamic memory allocation.
		*age= iage;
		*name= iname;
		
		cout<<"Dynamic memory allocation"<<endl;
		}
	~BeingHuman()
		{
		//released allocated memory.
		delete age;
		delete name;
		cout<<"memory deletion or deallocated\n";
		}
	void display()
		{
		cout<<"Name is "<< *name <<" and age is "<<*age<<endl;
		}
	};
int main()
	{
	cout<<"rakesh1meena[17-12-2018]\n";
	BeingHuman *rakesh= new BeingHuman(24,"rakesh1meena");
	rakesh->display();
	delete rakesh;
	
	return 0;
	}

