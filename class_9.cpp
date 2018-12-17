//class_9 [ Destructor in class.]
//object is goes to outofscope or when delete operation is performed in object of a calss.
#include<iostream>
using namespace std;

class BeingHuman
	{
	public:
	BeingHuman()
		{
		cout<<"Constructor is called \n";
		}
	//define destructor using ~.
	~BeingHuman()
		{
		cout<<"Destructor is called \n";
		}
	};
int main()
	{
	cout<<"rakesh1meena[17-12-2018]\n";
	BeingHuman *rakesh= new BeingHuman();
	
	//for callling destructor delete the allocated stored.
	delete rakesh;
	
	return 0;
	}
