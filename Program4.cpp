//CPP Program for addition of two numbers using addition() function with call by value

#include<iostream>  //Header file declaration

using namespace std;

void addition(int num1, int num2) //addition function without parameter
{
	
	int result;
	
	result = num1 + num2;
	
	cout<<" Addition is	:	 "<<result; 	//displaying message on console(screen)
}


int main()  //main function
{
		
	int num1;	// variable declaration
	
	int num2;
	
	int result;
	
	cout<<" Enter First Number	:	"; 	//displaying message on console(screen)
	
	cin>>num1;    //accepting input from console
	
	cout<<" Enter Second Number	:	"; 	//displaying message on console(screen)
	
	cin>>num2;    //accepting input from console		
		
		
	addition(num1,num2); //calling addition function with passing values
	
	return 0; 	//returning int value- main function has return type as integer
	
}		// end of main function



