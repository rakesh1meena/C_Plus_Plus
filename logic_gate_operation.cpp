// Logic Program.

#include<iostream>
#include<math.h>
using namespace std;

int AND_operation(int choice);
int dec_to_bin(int i, int column,int choice,int total_rows);
int main()
	{
	cout<<"rakesh1meena[18-12-2018]\n";
	
	//input variables.
	int choice;
	
	cout<<"Select a choice\n";
	cout<<"1. AND operation  2. OR operation  3. NOT operation\n";
	cin>>choice;
	switch(choice)
		{
		case 1:
		AND_operation(choice);
		break;
		
		default:
		cout<<"Please select right choice !\n";
		}
	return 0;
	}
	
//AND opertaion function Defination.
int AND_operation(int choice)
	{
	int number,total_rows;
	cout<<"Enter number for number of input variable(1-2)"<<endl;
	cin>>number;
	cout<<endl;
	int ascii= 65;
	total_rows = pow(2,number);
	for(int a=0;a<number;a++)
		{
		cout<<char(ascii)<<" ";
		ascii=ascii+1;
		}
	cout <<"Output "<<endl;
	//cout<<total_rows<<endl;
	for(int i=0;i<total_rows;i++)
		{
		dec_to_bin(i,number,choice,total_rows);
		 
		}
	return 0;
	}

//Defination of decimal to binary conversion.
int dec_to_bin(int i, int column,int choice,int total_rows)
	{
	 int number,rmd,j=-1;
	 int arr[i];
	 number = i; 
	 
	 //if(number == 0 ) { cout<<"0 0";}
	 	do {
		    j=j+1;
		    rmd= number%2;
		    //cout<<rmd<<" ";
		     arr[j]=rmd;
		     number=number/2;
		 } while(number != 0);
	 int diff = column-j;
	 
	 for(int k=j;k>-1;k--)   { cout<<arr[k]<<" "; } 
	 //printing zeros in remaning space.
	 for (int l=1 ; l<diff ; l++) { cout<<"0 "; }
	
	 if(choice == 1) 
	 
	 {
	 int flag=0; 
	 if(sizeof(arr)/sizeof(*arr)==(total_rows-1)){ flag =1;}
	  if(flag==0) cout<<"0 "; else cout<<"1 ";
	 }
	 cout<<" "<<endl;
	return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
