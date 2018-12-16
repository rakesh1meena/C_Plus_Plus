//class_1 [ introduction to class in c plus plus ]

#include<iostream>

using namespace std;

//name of class should start with class keyword.
class HumanBeing
        {
        //accessing permission.
        public :
        void display()
        { cout<<"This is a human collecting data\n"; }
	};


int main()
  {
  cout<<"rakesh1meena[16-12-2018]\n";
    
  //creating object of a class.
  HumanBeing anil;
  
  //calling member function of a class.
  anil.display();
  return 0;
  
  }
