//CPP Program for addition of two numbers using addition() function with call by value with integer retrun type

#include<iostream>  //Header file declaration

using namespace std;

int addition(int num1, int num2) //addition function without parameter and return type int
{ 
	
	int result;
	
	result = num1 + num2;
	
	return result;	//returning integer value
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
		
		
	result =  addition(num1,num2); //calling addition function with passing arguments
	
	cout<<" Addition is	:	 "<<result; 	//displaying message on console(screen)
	
	return 0; 	//returning int value- main function has return type as integer
	
}		// end of main function



