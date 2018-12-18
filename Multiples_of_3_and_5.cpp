//Multiple_of_3_and_5 
// take any largest integer value as input and print the sum of multiple of 3 and 5 from initial to largets value.
//INPUT FORMET 10 and 20 
//output will be 12+15+18 = 45

#include <iostream>
using namespace std;

int multiple_of_3_and_5(long n);
int main(){
	cout<<"rakesh1meena[18-12-2018]\n";
        long finall,initial;
        cout<<"enter two values a and b to find sum of 3 and 5 multiple in BETWEEN (a<b)  "<<endl;
        cin >>initial;
        long f= multiple_of_3_and_5(initial+1);
        cin>>finall;
        cout<<f<<endl;
        long l =multiple_of_3_and_5(finall);
        cout<<l<<endl;
        cout<<"Sum of between ( "<<initial<<" "<< finall<<" ) is: "<<(l-f)<<endl;
        
        
        
        
        
    
    return 0;
}
int multiple_of_3_and_5(long n)
	{
	long three,five,fifteen;
		long a,b,c,th,fi,fif;
		
		 three=((n-1)/3);
		 five= ((n-1)/5);
		 fifteen=((n-1)/15);
		
		    
		if(three%2==0)
		    { a= (three)/2; th = (3*a)*(three+1); }
		    else { a= (three+1)/2; th = (3*a)*(three); }

		   
		if(five%2==0)
		    { b= (five)/2; fi = (5*b)*(five+1); }
		    else { b= (five+1)/2; fi = (5*b)*(five); }

		    
		if(fifteen%2==0)
		    { c= (fifteen)/2; fif = (15*c)*(fifteen+1); }
		    else { c= (fifteen+1)/2; fif = (15*c)*(fifteen); }

		return(th+(fi-fif));
		
	}
