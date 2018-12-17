//class_7 [ constructor overloading -> its not like a rock mountain]
// [ Overload means we pass [type] the parameter inside the object of constructor. ]

#include<iostream>

using namespace std;

class BeingHuman
	{
        private:
	int age;
	string name;
	
	public:
	//default constructor.
	BeingHuman()
		{
		age=0;
		name="Empty";
		cout<<"DEFAULT constructor is called\n";
		}
	
	//constructor with age only.
	BeingHuman(int iage)
		{
		age=iage;
		name="Empty";
		cout<<"constructor is called with age parameter\n";
		}
	
	//constructor with name and age paarameter.
	BeingHuman(int iage, string iname)
		{
		age=iage;
		name=iname;
		cout<<"constructor is called with age and name parameter\n";
		}
		
	//display function.
	void display()
		{
		cout<<"NAME IS : "<<name <<" and age is " <<age<<endl;
	
		}
	
	};
int main()
	{
	cout<<"rakesh1meena[17-12-2018]\n";
	BeingHuman rakesh;
	rakesh.display();
	BeingHuman vinod(20);
	vinod.display();
	BeingHuman ganesh(20,"rakesh1meena");
	ganesh.display();
	return 0;
	}
