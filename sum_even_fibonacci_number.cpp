//sum_even_fibonacci_number
//Find the sum of even fibonacci number between two input integer a and b (a<b).

#include <iostream>
using namespace std;

int main(){
	cout<<"rakesh1meena[18-12-2018]\n";
        long n1,n2;
        cout<<"Enter two number n1 and n2 (n1<n2) : ";
        cin >>n1>>n2;
        
    //code for fibonacci serie.
    long a=1,b=2,c=0;
    long even_sum=0; 
     while(b<n2)
     {   //even fibonacci number sum. 
         if(b>n1)
         	{
         	if(b%2==0) { even_sum+=b; }
         	}
         c=a+b;
         a=b;
         b=c; 
     }
    cout<<"sum of EVEN fibonacci numbers between ("<<n1<<","<<n2<<") is = "<< even_sum<<endl;
    return 0;
}
