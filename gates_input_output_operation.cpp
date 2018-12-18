// Logic Program to print INPUT and OUTPUT of AND, OR, EQUIVALENCE GATES Operation.
// input is n then output will be 2^n rows followed by n+1 column. n should be in between [1-20].

#include<iostream>
#include<math.h>
using namespace std;

int operation(int choice);
int dec_to_bin(int i, int rows, int column,int choice);

//Defination of main function.
int main()
	{
	cout<<"rakesh1meena[18-12-2018]\n";
	
	//input variables.
	int choice;
	
	cout<<"Select a choice\n";
	cout<<"1. AND operation  2. OR operation 3. Equivalence operation \n";
	cin>>choice;
	if(choice == 1 or choice== 2 or choice== 3 )
	operation(choice);
	else
	cout<<"select right choice";
	return 0;
	}
	
//opertaion function Defination.
int operation(int choice)
	{
	int rows,column;
	int ascii= 65;
	cout<<"Enter number for number of input variable between [1-20]"<<endl;
	cin>>column;
	cout<<endl;
	rows = pow(2,column);
	
	//Name of input variable.
	for(int a=0;a<column;a++)
		{
		cout<<char(ascii)<<" ";
		ascii=ascii+1;
		}
	cout <<"Output "<<endl;
	for(int value=0;value<rows;value++) 
	   { dec_to_bin(value,rows,column,choice);  }
	return 0;
	}
	


//Defination of decimal to binary conversion.
int dec_to_bin(int value, int rows, int column,int choice)
	{
	 int rmd,diff,v=value;
	 int arr[value],arr_index=-1; 
	 
	 do {
	     arr_index+=1;
	     rmd= value%2;
       	     arr[arr_index]=rmd;
	     value=value/2;
	    } while(value != 0);
	 diff = column-arr_index;
	 
	 for(int k=arr_index; k>-1; k--)   { cout<<arr[k]<<" "; } 
	 //printing zeros in remaning space.
	 for (int l=1; l<diff; l++) { cout<<"0 "; }
	
	//For AND operation output.
	 if(choice == 1) 
		 {
		 int flag=0; 
		 if(sizeof(arr)/sizeof(*arr)==(rows-1)){ flag =1;}
		  if(flag==0) cout<<"0 "; else cout<<"1 ";
		  cout<<" "<<endl;
		 }
	 
	//For OR operation output. 
	 if(choice == 2)
		 {
		 if(v==0) cout<<"0 ";
		 else cout<<"1 ";
		 cout<<endl;
		 }
	//For equivalence operation output.
	if(choice == 3)
		{
		 if(v==0 or v==rows-1) cout<<"1 ";
		 else cout<<"0 ";
		 cout<<endl;
		}
	return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
