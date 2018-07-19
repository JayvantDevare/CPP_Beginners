//CPP Program for addition of two numbers using addition function

#include<iostream>  //Header file declaration

using namespace std;

void addition() //addition function without parameter
{
	int num1;	// variable declaration
	
	int num2;
	
	int result;
	
	cout<<" Enter First Number	:	"; 	//displaying message on console(screen)
	
	cin>>num1;    //accepting input from console
	
	cout<<" Enter Second Number	:	"; 	//displaying message on console(screen)
	
	cin>>num2;    //accepting input from console
	
	result = num1 + num2;
	
	cout<<" Addition is	:	 "<<result; 	//displaying message on console(screen)
}


int main()  //main function
{
		
	addition(); //calling addition function
	
	return 0; 	//returning int value- main function has return type as integer
	
}		// end of main function



