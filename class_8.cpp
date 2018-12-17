//class_8 [ asign Deafult value in constructor. ]
// so there is no need to assign defualt constructor separtely.

// Remember if you use parametrize constructor and don't initialize default constructor is through error (wana try download and try with class_7.cpp ).

// that's we learn class_8.cpp program 

#include<iostream>
using namespace std;

class BeingHuman
	{
	private:
	int age;
	string name;

	public:
	BeingHuman(int iage=10, string iname="rakesh1meena")
		{
		age=iage;
		name=iname;
		}	
	void display()
		{
		cout<<"Name is "<< name<<" and age is "<<age<<endl;
		}

	};
int main()
	{
	cout<<"rakesh1meena[17-12-2018]\n";
	//constructor without parameter
	BeingHuman rakesh;
	rakesh.display();
	
	//passing parameter so now default parameter is updated.
	BeingHuman vinod(30,"Rakesh");
	vinod.display();
	
	//you can also pass a single parameter...let's try.
	BeingHuman ganesh(25);
	ganesh.display();
	return 0;
	}

