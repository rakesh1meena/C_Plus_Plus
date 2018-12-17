//class_5 [ private accessing specifier ]
        //[ we also print private data with the help of public function.]
        //[ here you can check the OUTPUT age is different from INPUT age so data is secured from outside. ]
        
#include<iostream>

using namespace std;


class BeingHuman
	{
	//declare private data members.
	private:
	int age;
	
	//changing the original age of user
	int change_age()
	{
	age=age-5;
	return age;
	}
	
	//declare public data members.
	public:
	void introduce()
	  {
	  cout<<"Age is :  "<<change_age()<<endl;
	  } 
	  
	  //assign the age to private data member.
	  void add_age(int a)
	  {
	  age = a;
	  }
	};
	
	
int main()
	{
	BeingHuman *age_is= new BeingHuman();
	
	int a=20;
	age_is->add_age(a);
	age_is->introduce();
	
	return 0;
	}
