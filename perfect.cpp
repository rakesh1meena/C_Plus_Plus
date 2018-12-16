//program for find perfect number in c plus plus.
#include<iostream>
using namespace std;	
	
int check_perfect(int number);
int print_perfect(int first, int last);	
	
int main()
    {
    cout<<"rakesh1meena[16-12--2018]\n";
    
      int choice,result,number,first,last;
          cout<<"Select the choice \n 1. check entered number if perfect or not ! \n 2. print perfect number in between the range.\n ";
          cin>>choice; 
          switch(choice)
           {
            case 1 : 
               while(1)
	          {
		     cout<<"Enter a number or for EXIT enter 0 \n";
		     cin>>number;
		     if(number == 0) break;
		     
                     result= check_perfect(number);
                     
                     if(result == number) cout<<number<<" is PERFECT \n\n";
                     else cout<<number<<" is not PERFECT \n\n"; 
	          }
             break;
             
            case 2 :
            cout<<"Enter the range between you want to print perfect number[first,last]";
	    cin>>first>>last;
             print_perfect(first,last);
             break;
            default:
            cout <<"OOPS! Please select right choice !";
           }
           cout<<"\n";
      return 0;
      }    
      
int check_perfect(int number)
    { 
    int sum=0;
    
    for( int i=1;i<=number; i++)   {  if(number % i == 0) sum+=i; }   
   
    if(sum == (2*number)) return number;  else return 0;
      
    }
    
int print_perfect(int first, int last)
	{
	int result;
	if(first > last)
	{ int temp=last; last=first; first=temp;}
	
	cout<<"PERFECT number between "<<first<<" and "<<last<<" are : \n";
	for(int i=first ; i<=last; i++)
	  {
	    result= check_perfect(i);
	    if(result == i) cout<<i<<" ";
	  }
	return 0;
	} 
