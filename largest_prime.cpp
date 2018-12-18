//largest_prime
//print largest prime number from 1 to input n number.

#include<iostream>
using namespace std;
int main()
{
    cout<<"rakesh1meena[16-12--2018]\n";
    int n,i,fact,j;
    cout<<"Enter the Number";
    cin>>n;
    cout<<"Largest Prime Number between  1 to "<<n<<" is : ";
    for(i=n; i>=1; i--)
    {
        fact=0;
        for(j=i; j>=1; j--)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
           { cout<<i; break ;}
    }
return 0;
}

