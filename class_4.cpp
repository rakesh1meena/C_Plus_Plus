//class_4 [declare function outside the class in c plus plus.]

#include<iostream>

using namespace std;

class HumanBeing 
   {
   public:
   string name;
   //declare publically function of class HumanBeing.
   void introduce();
   };


//defination of introduce function outsoide the class.
void HumanBeing :: introduce()
   {
    cout<<"Hello I am: "<<HumanBeing::name<<endl;
   } 

int  main()
   {
     cout<<"rakesh1meena[16-12-2018]\n";
     
     HumanBeing *anil = new HumanBeing();
     anil->name="Anil";
     anil->introduce();
     
    return 0;
    }

