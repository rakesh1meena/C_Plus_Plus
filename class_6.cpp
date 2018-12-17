//class_6 [ Declaration of constructor ]
// constructor is autometically called 
//Genereally we use to initialize the intial value using constructor.

#include<iostream>
 
using namespace std;

class HumanBeing
	{
	private:
	int age;
	string name;
	
	public:
	//declration of constructore in side the class CONSTRUCTURE NAME SAME AS CLASS NAME.
	HumanBeing()
		{
		cout<<"Constructor is called autometically when object is created\n";
		name="Rakesh";
		age =18;
		}
	 void introduce()
		{
		cout <<"My Name is "<<name << " and AGE is "<<age<<endl;
		}
	void update(int age1, string name1)
		{
		age=age1;
		name=name1;
		}
		
	};
int main()
	{
	cout<<"rakesh1meena[17-12-2018]\n";
	//by default -> constructor
	HumanBeing rakesh;
	rakesh.introduce();
	
	//Intialize by user.
	int age=20;
	string name="Rakesh Meena";
	rakesh.update(age,name);
	rakesh.introduce();
	return 0;
	}
